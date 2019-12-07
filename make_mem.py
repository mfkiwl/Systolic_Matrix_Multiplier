import sys
import random
import os
import shutil

M = int(sys.argv[1])
N = int(sys.argv[2])

f_m0 = open("./sim/A.mem", "w") 

random.seed(a=0)

for i in range(int(M*M/N)):
    line = ""
    for j in range(N):
        line = line + str(0) + str(random.randint(0,9))
    f_m0.write(line+"\n")
f_m0.close()

f_m1 = open("./sim/B.mem", "w") 

for i in range(int(M*M/N)):
    line = ""
    for j in range(N):
        line = line + str(0) + str(random.randint(0,9))
    f_m1.write(line+"\n")
f_m1.close()

f_testbench = open("./sim/testbench.sv", "r+")
testbench = f_testbench.read().split('\n')
testbench[12] = "    parameter N = " + str(N) + ","
testbench[13] = "    parameter M = " + str(M)
f_testbench.seek(0)
f_testbench.write("\n".join(testbench))

#appending
f_systolic = open("./src/systolic.vhd","r+")
systolic = f_systolic.read().split('\n')
systolic[8] = "        M : INTEGER := " + str(M) + ";"
systolic[9] = "        N : INTEGER := " + str(N) + ";"
f_systolic.seek(0)
f_systolic.write("\n".join(systolic))

f_pe = open("./src/pe.vhd","r+")
pe = f_pe.read().split('\n')
pe[7] = "        M : INTEGER := " + str(M) + ";"
f_pe.seek(0)
f_pe.write("\n".join(pe))

f_counter = open("./src/counter.vhd","r+")
counter = f_counter.read().split('\n')
counter[8] = "            M : INTEGER := " + str(M) + ";"
counter[9] = "            N : INTEGER := " + str(N) + ");"
f_counter.seek(0)
f_counter.write("\n".join(counter))