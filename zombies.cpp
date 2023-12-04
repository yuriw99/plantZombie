#include<vector>
#include<string>


class Zombie {
public: 
	int pos;
	int speed;
	int health;
void move() {
		pos = pos + speed;
	}
};

class NormZombie: Zombie {
	
public:
	NormZombie() {
		pos = 0;
		speed = 20;
		health = 100;
	}


};

class FastZombie: Zombie {
public:
	FastZombie() {
		pos = 0;
		speed = 80;
		health = 100;
	}


};

int main() {
	FastZombie fast();
}

