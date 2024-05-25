message(STATUS "config.cmake inclde")



##[[
#导出项目信息
string(TIMESTAMP BUILD_TIME UTC)
configure_file(
    "${CMAKE_SOURCE_DIR}/cmake/Information.h.in" 
    "${CMAKE_SOURCE_DIR}/include/Information.h"
)
unset(BUILD_TIME)
#]]