#include "oscillator.h"

Oscillator::Oscillator()
{
    std::cout << "Inside Oscillator constructor\n";
}


Oscillator::~Oscillator()
{
    std::cout << "Inside Oscillator destructor\n";
}

void Oscillator::setFrequency(float frequency)
{
    // TODO - validate input
    this->frequency = frequency;
}

float Oscillator::getFrequency()
{
    return frequency;
}