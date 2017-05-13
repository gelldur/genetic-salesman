### TSP - traveling salesman problem

Created thanks to: http://www.theprojectspot.com/tutorial-post/applying-a-genetic-algorithm-to-the-travelling-salesman-problem/5


Small task for UAM


- [Creating a genetic algorithm for beginners](http://www.theprojectspot.com/tutorial-post/creating-a-genetic-algorithm-for-beginners/3)



### Sample output

```
Please enter map width: 
10
Generated map: 
#|#|#|#|G|#|#|#|P|T| 9 
--------------------
#|#|D|#|#|I|#|#|O|S| 8 
--------------------
#|C|#|E|#|#|J|L|#|#| 7 
--------------------
#|#|#|#|#|#|#|#|N|#| 6 
--------------------
#|#|#|#|#|#|#|#|#|R| 5 
--------------------
#|#|#|#|#|#|#|#|#|#| 4 
--------------------
#|B|#|#|#|#|#|K|#|#| 3 
--------------------
#|#|#|#|#|#|#|#|M|Q| 2 
--------------------
A|#|#|#|F|H|#|#|#|#| 1 
--------------------
#|#|#|#|#|#|#|#|#|#| 0 
--------------------
0 1 2 3 4 5 6 7 8 9 
First best route in population #1: 75.8153
Route: |->[x: 1 y: 7]->[x: 2 y: 8]->[x: 9 y: 9]->[x: 8 y: 8]->[x: 8 y: 6]->[x: 8 y: 2]->[x: 8 y: 9]->[x: 5 y: 8]->[x: 3 y: 7]->[x: 1 y: 3]->[x: 4 y: 1]->[x: 5 y: 1]->[x: 6 y: 7]->[x: 4 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 9 y: 5]->[x: 0 y: 1]->[x: 7 y: 3]->[x: 9 y: 2]|
Genetic algorithm config: tournamentSize: 5 mutationRate: 0.015 elitsm: 1#3 Better route in population: 73.6296
	Route:|->[x: 9 y: 5]->[x: 9 y: 8]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 2 y: 8]->[x: 5 y: 1]->[x: 8 y: 6]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 1 y: 7]->[x: 4 y: 9]->[x: 3 y: 7]->[x: 9 y: 9]->[x: 8 y: 9]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 8 y: 2]->[x: 4 y: 1]|
#4 Better route in population: 70.2956
	Route:|->[x: 9 y: 2]->[x: 7 y: 3]->[x: 8 y: 2]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 5]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 4 y: 9]->[x: 3 y: 7]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 5 y: 1]->[x: 8 y: 6]->[x: 6 y: 7]->[x: 5 y: 8]|
#6 Better route in population: 67.5483
	Route:|->[x: 8 y: 2]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 4 y: 9]->[x: 3 y: 7]->[x: 9 y: 9]->[x: 5 y: 1]->[x: 8 y: 6]->[x: 8 y: 9]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 9 y: 8]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 9 y: 5]->[x: 6 y: 7]->[x: 5 y: 8]|
#7 Better route in population: 63.1297
	Route:|->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 8 y: 2]->[x: 8 y: 6]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 5]|
#9 Better route in population: 60.8896
	Route:|->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 8 y: 8]->[x: 8 y: 2]->[x: 8 y: 6]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 7 y: 7]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 5]|
#11 Better route in population: 60.3185
	Route:|->[x: 8 y: 6]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 9 y: 5]->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 8 y: 2]|
#12 Better route in population: 57.1203
	Route:|->[x: 8 y: 6]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 5]->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]|
#13 Better route in population: 52.4405
	Route:|->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 8 y: 6]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 9 y: 5]|
#14 Better route in population: 50.4804
	Route:|->[x: 8 y: 8]->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]|
#15 Better route in population: 49.5196
	Route:|->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 8]|
#16 Better route in population: 44.4231
	Route:|->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 8]->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#18 Better route in population: 43.439
	Route:|->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 9 y: 5]->[x: 8 y: 6]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#20 Better route in population: 38.7149
	Route:|->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 8 y: 8]->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#23 Better route in population: 37.5918
	Route:|->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 6 y: 7]->[x: 5 y: 8]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#26 Better route in population: 37.3399
	Route:|->[x: 4 y: 9]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 5 y: 8]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 6 y: 7]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#36 Better route in population: 37.3017
	Route:|->[x: 3 y: 7]->[x: 2 y: 8]->[x: 1 y: 7]->[x: 4 y: 9]->[x: 5 y: 8]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 6 y: 7]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#38 Better route in population: 36.518
	Route:|->[x: 2 y: 8]->[x: 1 y: 7]->[x: 3 y: 7]->[x: 4 y: 9]->[x: 5 y: 8]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 6 y: 7]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#39 Better route in population: 35.9323
	Route:|->[x: 1 y: 7]->[x: 2 y: 8]->[x: 3 y: 7]->[x: 4 y: 9]->[x: 5 y: 8]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 6 y: 7]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 8 y: 2]->[x: 9 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#75 Better route in population: 34.9481
	Route:|->[x: 1 y: 7]->[x: 2 y: 8]->[x: 3 y: 7]->[x: 4 y: 9]->[x: 5 y: 8]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 6 y: 7]->[x: 7 y: 7]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 9 y: 2]->[x: 8 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
#94 Better route in population: 34.2001
	Route:|->[x: 1 y: 3]->[x: 1 y: 7]->[x: 2 y: 8]->[x: 3 y: 7]->[x: 4 y: 9]->[x: 5 y: 8]->[x: 6 y: 7]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 9 y: 2]->[x: 8 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]|
#96 Better route in population: 32.4361
	Route:|->[x: 1 y: 7]->[x: 2 y: 8]->[x: 3 y: 7]->[x: 4 y: 9]->[x: 5 y: 8]->[x: 6 y: 7]->[x: 7 y: 7]->[x: 8 y: 8]->[x: 8 y: 9]->[x: 9 y: 9]->[x: 9 y: 8]->[x: 8 y: 6]->[x: 9 y: 5]->[x: 9 y: 2]->[x: 8 y: 2]->[x: 7 y: 3]->[x: 5 y: 1]->[x: 4 y: 1]->[x: 0 y: 1]->[x: 1 y: 3]|
This is the END!
Process finished with exit code 0
```