cmake_minimum_required(VERSION 3.14)

project(purrrpp)

set(CMAKE_CXX_STANDARD 17)

option(PURRRPP_ENABLE_VULKAN "Build purrrpp with Vulkan" ON)

if(PURRRPP_ENABLE_VULKAN)
  find_package(Vulkan REQUIRED)
else()
  message(FATAL_ERROR "Cannot build purrrpp without backend (for example Vulkan)")
endif()

add_subdirectory(purrrpp/)
add_subdirectory(sandbox/)