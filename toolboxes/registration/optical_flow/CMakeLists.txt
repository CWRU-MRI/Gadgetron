install(FILES
  registrationSolver.h
  multiresRegistrationSolver.h
  opticalFlowSolver.h 
  resampleOperator.h
  opticalFlowOperator.h 
  DESTINATION ${GADGETRON_INSTALL_INCLUDE_PATH} COMPONENT main)

add_library(gadgetron_toolbox_registration_optical_flow INTERFACE)
target_link_libraries(gadgetron_toolbox_registration_optical_flow INTERFACE
        gadgetron_toolbox_cpu_solver)
target_include_directories(gadgetron_toolbox_registration_optical_flow
        INTERFACE
        ${CMAKE_CURRENT_SOURCE_DIR})

message("Compiling cpu based optical flow registration toolbox.")
set(BUILD_CPU_OPTIMAL_FLOW_REG On)

add_subdirectory(cpu)

set(GADGETRON_BUILD_RPATH "${CMAKE_CURRENT_BINARY_DIR};${GADGETRON_BUILD_RPATH}" PARENT_SCOPE)