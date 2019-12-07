import sys
import math

N = int(sys.argv[1])
sim_mode = sys.argv[2]

mem0 = open("./sim/A.mem")
depth_mem0 = len(mem0.readlines())

M = math.ceil(math.sqrt(depth_mem0*N))

A = [[0 for i in range(M)] for j in range(M)]
B = [[0 for i in range(M)] for j in range(M)]
D = [[0 for i in range(M)] for j in range(M)]

mem0 = open("./sim/A.mem")
i=0
for line in mem0:
    for n in range(N):
        row = int(i/M)*N + n
        column = int(i%M)  
        A[row][column] = 16*int(line[2*(N-1-n)],16)+int(line[2*(N-1-n)+1],16)
    i+=1

mem1 = open("./sim/B.mem")
i=0
for line in mem1:
    for n in range(N):
        row = int(i%M)#int(i/M)*N + n
        column = int(i/M)*N + n# int(i%M)  
        B[row][column] = 16*int(line[2*(N-1-n)],16)+int(line[2*(N-1-n)+1],16)
    i+=1
# if 'a' in sim_mode:
#     mem2 = open("./lab4/lab4.sim/sim_2/behav/xsim/D.mem")
if 'b' in sim_mode:
    mem2 = open("./EE116_lab4/EE116_lab4.sim/sim_1/behav/xsim/D.mem")
else:
    mem2 = open("./EE116_lab4/EE116_lab4.sim/sim_1/synth/timing/xsim/D.mem")
i=0
isCorrect = True
for line in mem2:
    if(line[0] != "/"):
        quadrant = int(i/(N*N))
        row = (int(quadrant/(M/N)))*N+int((i-((quadrant)*N*N))/N)
        column = int(((quadrant)%(M/N)))*N+int((i-((quadrant)*N*N))%N)
        if(line[0] == "x"):
            D[row][column] = "x"
            isCorrect = False
        elif(line[0] == "u"):
            D[row][column] = "u"
            isCorrect = False
        else:
            D[row][column] = int(line,16)
        i+=1

truth = [[0 for i in range(M)] for j in range(M)]
for i in range(M):
    for j in range(M):
        for k in range(M):
            truth[i][j] = truth[i][j] + A[i][k] * B[k][j]
        isCorrect = isCorrect and (truth[i][j] == D[i][j])

print("Matrix 0 (A) is")
for i in range(M):
    print(A[i]) 
print("Matrix 1 (B) is")
for i in range(M):
    print(B[i]) 
print("Answer is")
for i in range(M):
    print(truth[i])
print("Your answer is:")
for i in range(M):		
    print(D[i])
print("##########")
if isCorrect:
    print("Congratulate!")
else:
    print("Somthing Wrong!")
print("##########")
