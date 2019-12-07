create_project -quiet EE116_lab4 ./EE116_lab4 -part xc7z020clg484-1
add_files -norecurse {./src/systolic.vhd ./src/counter.vhd ./src/pe.vhd ./src/util_package.vhd}
update_compile_order -fileset sources_1
set_property SOURCE_SET sources_1 [get_filesets sim_1]
set_property -name {xsim.simulate.runtime} -value {100us} -objects [get_filesets sim_1]
add_files -fileset sim_1 -norecurse {./sim/pipe.sv ./sim/testbench.sv ./sim/A.mem ./sim/B.mem}
update_compile_order -fileset sim_1
launch_simulation
close_sim
exit
