# CMakeList.txt : CMake project for PPP, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (PPP "PPP.cpp" "PPP.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET PPP PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
