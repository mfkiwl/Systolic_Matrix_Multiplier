# Systolic Matrix Multiplier
* Multiply two **M×M** matries using a **N×N** systolic array, where **M** is a integer times 
**N**.
* Simulation based on Vivado 2019.1
---
## make_mem.py
Create two input matries **A.mem** and **B.mem**
``` bash
> python make_mem.py [M] [N]
```
## Launch Vivado in TCL mode
run the behavior simulation
```bash
> vivado -mode tcl -source script.tcl
```
## test.py
test the result
```bash
>python test.py [N]
```