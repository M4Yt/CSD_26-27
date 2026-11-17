#include <iostream>

// 3 type access specifiers:
// public, protected, private

class Oscillator
{
public:
  Oscillator();
  ~Oscillator();

  void setFrequency(float frequency);
  float getFrequency();

private:
  float frequency = 0.0f;
};
