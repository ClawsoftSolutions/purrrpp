file(GLOB_RECURSE SOURCES "src/**.cpp" "include/**.hpp")
add_library(purrrpp STATIC ${SOURCES})
target_include_directories(purrrpp PUBLIC include/)

if(PURRRPP_ENABLE_VULKAN)
  target_link_libraries(purrrpp ${VULKAN_LIB_LIST})
endif()