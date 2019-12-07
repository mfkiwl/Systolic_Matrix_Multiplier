# Systolic Matrix Multiplier
* Multiply two `M×M` matries using a `N×N` systolic array, where `M` is a integer times `N`.
* Simulation based on Vivado 2019.1

## make_mem.py
create two input matries `A.mem` and `B.mem`, which are shaped by slicing.
``` bash
$ python make_mem.py [M] [N]
```
## script.tcl
run behavior simulation in Vivado TCL mode
```bash
$ vivado -mode tcl -source script.tcl
```
## test.py
test the result
```bash
$ python test.py [N]
```