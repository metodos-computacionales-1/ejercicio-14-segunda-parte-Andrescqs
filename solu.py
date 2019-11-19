import matplotlib.pyplot as plt
import numpy as np

data = np.loadtxt("solu.dat")

plt.figure()
plt.plot(data[0], data[2])
plt.savefig("solu.png")
