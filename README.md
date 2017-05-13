### TSP - traveling salesman problem

Created thanks to: http://www.theprojectspot.com/tutorial-post/applying-a-genetic-algorithm-to-the-travelling-salesman-problem/5


Small task for UAM


- [Creating a genetic algorithm for beginners](http://www.theprojectspot.com/tutorial-post/creating-a-genetic-algorithm-for-beginners/3)


Using this algorithm working time is easy to predict like: 1200 mls

### For map width: 8 (10 cities)

- genetic algorithm: 1 193 mls, best distance: 22.3014 (for 1000 generations)
- brute force: 506 692 mls, best distance: 22.1981

### For map width: 7 (9 cities)

- genetic algorithm: 103 mls, best distance: 14.4049 (for 100 generations)
- brute force: 327 mls, best distance: 14.4049

### Sample output

```
Please enter map width: 
8
Generated map: 
#|D|#|#|#|#|#|#| 7 
----------------
#|#|#|#|#|J|#|#| 6 
----------------
#|#|#|#|H|#|#|#| 5 
----------------
#|#|#|#|G|#|#|#| 4 
----------------
A|#|#|#|#|#|#|#| 3 
----------------
#|C|#|#|#|#|#|L| 2 
----------------
#|#|F|#|#|I|#|#| 1 
----------------
#|B|E|#|#|#|K|#| 0 
----------------
0 1 2 3 4 5 6 7 
First best route in population #1: 35.0647
Route: |->[x: 2 y: 0]->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 0 y: 3]->[x: 2 y: 1]->[x: 1 y: 2]->[x: 1 y: 0]->[x: 4 y: 4]->[x: 5 y: 6]->[x: 1 y: 7]->[x: 4 y: 5]|
Genetic algorithm config: tournamentSize: 5 mutationRate: 0.015 elitsm: 1#3 Better route in population: 32.3007
	Route:|->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 0 y: 3]->[x: 2 y: 1]->[x: 1 y: 2]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 4 y: 4]->[x: 5 y: 6]->[x: 1 y: 7]->[x: 4 y: 5]|
#5 Better route in population: 29.6505
	Route:|->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 4 y: 4]->[x: 5 y: 6]->[x: 1 y: 7]->[x: 4 y: 5]|
#7 Better route in population: 28.8286
	Route:|->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 4 y: 4]->[x: 5 y: 6]->[x: 1 y: 7]->[x: 4 y: 5]->[x: 6 y: 0]->[x: 5 y: 1]->[x: 7 y: 2]|
#10 Better route in population: 27.2428
	Route:|->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 4 y: 4]->[x: 1 y: 7]->[x: 5 y: 6]->[x: 4 y: 5]|
#12 Better route in population: 26.9649
	Route:|->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 2 y: 1]->[x: 1 y: 2]->[x: 0 y: 3]->[x: 4 y: 4]->[x: 5 y: 6]->[x: 1 y: 7]->[x: 4 y: 5]|
#13 Better route in population: 26.7801
	Route:|->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 2 y: 1]->[x: 1 y: 2]->[x: 0 y: 3]->[x: 4 y: 4]->[x: 1 y: 7]->[x: 5 y: 6]->[x: 4 y: 5]|
#14 Better route in population: 26.7149
	Route:|->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 4 y: 4]->[x: 1 y: 7]->[x: 5 y: 6]->[x: 4 y: 5]->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]|
#19 Better route in population: 23.8418
	Route:|->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 4 y: 4]->[x: 5 y: 6]->[x: 4 y: 5]->[x: 1 y: 7]->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]|
#25 Better route in population: 23.1233
	Route:|->[x: 6 y: 0]->[x: 7 y: 2]->[x: 5 y: 1]->[x: 4 y: 4]->[x: 4 y: 5]->[x: 5 y: 6]->[x: 1 y: 7]->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]|
#26 Better route in population: 23.0199
	Route:|->[x: 7 y: 2]->[x: 6 y: 0]->[x: 5 y: 1]->[x: 4 y: 4]->[x: 5 y: 6]->[x: 4 y: 5]->[x: 1 y: 7]->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]|
#29 Better route in population: 22.3014
	Route:|->[x: 7 y: 2]->[x: 6 y: 0]->[x: 5 y: 1]->[x: 4 y: 4]->[x: 4 y: 5]->[x: 5 y: 6]->[x: 1 y: 7]->[x: 0 y: 3]->[x: 1 y: 2]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]|
This is the END! It took: 1193 mls
Now some brute force!!!!!!!!!
Better route in brute force: 22.2074
	Route:|->[x: 5 y: 6]->[x: 4 y: 5]->[x: 4 y: 4]->[x: 7 y: 2]->[x: 6 y: 0]->[x: 5 y: 1]->[x: 2 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 1 y: 2]->[x: 0 y: 3]->[x: 1 y: 7]|
Better route in brute force: 22.1981
	Route:|->[x: 5 y: 6]->[x: 4 y: 5]->[x: 4 y: 4]->[x: 7 y: 2]->[x: 6 y: 0]->[x: 5 y: 1]->[x: 2 y: 0]->[x: 1 y: 0]->[x: 2 y: 1]->[x: 1 y: 2]->[x: 0 y: 3]->[x: 1 y: 7]|
This is the END! It took: 506692 mls
```