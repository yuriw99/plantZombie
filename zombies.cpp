#include<vector>
#include<string>


class NormZombie {

public:
	void move() {
		pos = pos + speed;
	}

private:
	int pos = 0;
	int speed = 20;
	int health = 100;
};