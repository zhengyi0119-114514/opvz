string(TIMESTAMP __TIME_OF_LOG_FILE "%Y-%m-%d--%H-%M-%S")
set(LOG_FILE_NAME "${PROJECT_SOURCE_DIR}/log/${__TIME_OF_LOG_FILE}.log")

function(start_log)
    file(APPEND ${LOG_FILE_NAME} 
        "----------------------------------------------start----------------------------------------------")    
endfunction()

function(append_log MASSAGE)
    string(TIMESTAMP TIME "\"%Y.%m.%d-%H:%M:%S\"")
    set(OUTPUT_MASSAGE "[${TIME}]:\"${MASSAGE}\"")

    
    file(APPEND ${LOG_FILE_NAME} "${OUTPUT_MASSAGE}\n")
    message(NOTICE ${OUTPUT_MASSAGE})
endfunction()

function(end_log)
    file(APPEND ${LOG_FILE_NAME} 
        "-----------------------------------------------end-----------------------------------------------")  
endfunction()

function(show_about)
    append_log("${CMAKE_C_COMPILER_LAUNCHER}")
endfunction()


