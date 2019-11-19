import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("solu.dat")

rk4 = np.loadtxt("rk4.dat")

plt.figure()
plt.plot(data[0], data[2])
plt.xlabel("t")
plt.ylabel("v")
plt.savefig("solu.png")

plt.figure()
plt.plot(rk4[2], rk4[1])
plt.xlabel("v")
plt.ylabel("x")
plt.savefig("rk4.png")

