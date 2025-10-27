cmake_minimum_required(VERSION 3.10)
project(setlocale_examples C)

if(MSVC)
    add_compile_options(/source-charset:utf-8)
endif()

add_executable(setlocale_default setlocale_default.c)
add_executable(setlocale_utf8    setlocale_utf8.c)
add_executable(utf8_emoji        utf8_emoji.c)
add_executable(def2utf8          def2utf8.c)

if(MSVC)
    target_compile_options(setlocale_default PRIVATE /execution-charset:.932)
    target_compile_options(setlocale_utf8    PRIVATE /execution-charset:utf-8)
    target_compile_options(utf8_emoji        PRIVATE /execution-charset:utf-8)
    target_compile_options(def2utf8          PRIVATE /execution-charset:utf-8)
else()
    if (CMAKE_SYSTEM_NAME STREQUAL "MSYS")
        target_compile_options(setlocale_default PRIVATE
            -fexec-charset=CP932
        )
    endif()
endif()
