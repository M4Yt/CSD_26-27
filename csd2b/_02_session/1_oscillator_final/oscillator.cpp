#include "oscillator.h"


// default constructor assigns default values
Oscillator::Oscillator()
{
  std::cout << "Inside Oscillator default constructor ()\n";
  freq = 220.0;
  amp = 0.0;
}

Oscillator::Oscillator(float frequency, float amp)
{
  std::cout << "Inside Oscillator constructor (frequency, amp)\n";
  freq = frequency;
  this->amp = amp;
}

Oscillator::~Oscillator()
{
  std::cout << "Inside Oscillator destructor\n";
}


// setters and getters
void Oscillator::setFreq(float freq)
{
  if(freq > 0 && freq < 22050) {
    this->freq = freq;
  } else {
    std::cout << "The frequency value is incorrect"
    << " please present a value in the interval [0, 22049]\n";
  }
}

float Oscillator::getFreq()
{
  return freq;
}
