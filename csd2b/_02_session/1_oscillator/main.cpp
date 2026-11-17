#include "oscillator.h"

int main()
{
  std::cout << "\nin main\n";
  Oscillator osc;
  osc.setFrequency(444000.0f);
  std::cout << "oscillator frequency: " << osc.getFrequency() << std::endl;

  // end program
  return 0;
}
