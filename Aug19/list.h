class List { // ADT
	public:
	virtual void add(int num) = 0;
	virtual int get(int pos) = 0;
	virtual int remove(int num) = 0;
	// ADD AT (NUM, POS)
	virtual void print() = 0;
};
