add_executable(sense_cg_radial_2d main_cg.cpp)
add_executable(sense_sbc_radial_2d main_sbc.cpp)
add_executable(sense_gpbb_radial_2d main_gpbb.cpp)
add_executable(sense_nlcg_radial_2d main_nlcg.cpp)

target_link_libraries(sense_cg_radial_2d gadgetron_toolbox_gpu gadgetron_toolbox_cpucore gadgetron_toolbox_hostutils ${CUDA_LIBRARIES})
target_link_libraries(sense_sbc_radial_2d gadgetron_toolbox_gpu gadgetron_toolbox_cpucore gadgetron_toolbox_hostutils ${CUDA_LIBRARIES})
target_link_libraries(sense_gpbb_radial_2d gadgetron_toolbox_gpu gadgetron_toolbox_cpucore gadgetron_toolbox_hostutils ${CUDA_LIBRARIES})
target_link_libraries(sense_nlcg_radial_2d gadgetron_toolbox_gpu gadgetron_toolbox_cpucore gadgetron_toolbox_hostutils ${CUDA_LIBRARIES})

install(TARGETS sense_cg_radial_2d sense_sbc_radial_2d sense_gpbb_radial_2d sense_nlcg_radial_2d DESTINATION bin COMPONENT main)
