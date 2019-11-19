import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("solu.dat")

plt.figure()
plt.plot(data[0], data[2])
plt.xlabel("t")
plt.ylabel("v")
plt.savefig("solu.png")
