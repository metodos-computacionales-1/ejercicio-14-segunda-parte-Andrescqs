rk4.png solu.png : solu.dat rk4.dat
	python solu.py
	
		
rk4.dat : rk4.x
	./rk4.x >> rk4.dat


rk4.x : rk4.cpp
	c++ rk4.cpp -o rk4.x
	

solu.dat : solu.x
	./solu.x >> solu.dat
	

solu.x : solu.cpp
	c++ solu.cpp -o solu.x