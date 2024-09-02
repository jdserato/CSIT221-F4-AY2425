struct Point {
	int x, y;
	
	// define midpoint(Point p) here
	Point midpoint(Point* second) {
		Point mid;
		int x = 100;
		mid.x = (this->x + second->x) / 2;
		mid.y = (this->y + second->y) / 2;
		return mid;
	}
};
