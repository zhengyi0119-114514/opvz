include(GenerateExportHeader)
message(STATUS "exoprt.cmake included")

function(add_export_headfile _target _export_path)
    GENERATE_EXPORT_HEADER("${_target}"
        EXPORT_FILE_NAME "${_export_path}/${_target}_export_or_import.h"
        BASE_NAME ${_target}
        EXPORT_MACRO_NAME "${_target}_export"
        NO_EXPORT_MACRO_NAME "${_target}_hiddened"
    )
    set(__target ${_target})
        configure_file("${__root_cmake_module_path}/export/export.h.in")
    unset(__target)
endfunction()

