#ifndef Blink_h
#define Blink_h

class Blink{
	public:
		Blink(int pinNum);
		void now(void); //toggle Led now with time between on/off 

	private:
		int _pin;
		int _timeBetweenOnOffMillis = 1000;
};

#endif