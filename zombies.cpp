#include<vector>
#include<string>


class NormZombie {

public:
	NormZombie() {
		pos = 0;
		speed = 20;
		health = 100;
	}
	void move() {
		pos = pos + speed;
	}

private:
	int pos;
	int speed;
	int health;
};

class FastZombie {
public:
	FastZombie() {
		pos = 0;
		speed = 80;
		health = 100;
	}
	void move() {
		pos = pos + speed;
	}

private:
	int pos;
	int speed;
	int health;
};


