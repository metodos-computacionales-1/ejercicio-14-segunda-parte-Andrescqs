solu.png : solu.dat
	python solu.py
	
	
solu.dat : solu.x
	./solu.x >> solu.dat
	


solu.x : solu.cpp
	c++ solu.cpp -o solu.x