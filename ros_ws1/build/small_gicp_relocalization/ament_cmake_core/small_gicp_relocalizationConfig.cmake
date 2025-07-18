# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_small_gicp_relocalization_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED small_gicp_relocalization_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(small_gicp_relocalization_FOUND FALSE)
  elseif(NOT small_gicp_relocalization_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(small_gicp_relocalization_FOUND FALSE)
  endif()
  return()
endif()
set(_small_gicp_relocalization_CONFIG_INCLUDED TRUE)

# output package information
if(NOT small_gicp_relocalization_FIND_QUIETLY)
  message(STATUS "Found small_gicp_relocalization: 1.0.4 (${small_gicp_relocalization_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'small_gicp_relocalization' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${small_gicp_relocalization_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(small_gicp_relocalization_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${small_gicp_relocalization_DIR}/${_extra}")
endforeach()
