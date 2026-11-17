

Relevant files: 
- sine.h & sine.cpp
- customCallback.h --> process method --> where the magic happens.
Dit is de essentie van deze file --> in een 'klein aangereikt buffertje' schrijven we onze samples weg. 
```
    // write sample to buffer at channel 0, amp = 0.25
    outputChannels[channel][sample] = sine.getSample();
    sine.tick();
```