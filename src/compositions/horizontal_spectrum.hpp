

#ifndef SMOKEYBBQ_HORIZONTAL_SPECTRUM_HPP
#define SMOKEYBBQ_HORIZONTAL_SPECTRUM_HPP

#include <compositions/composition.hpp>

class HorizontalSpectrum : public Composition
{

public:
    HorizontalSpectrum(SmokeSimulation *smokeSimulation, AudioAnalyzer *audioAnalyzer) : Composition(smokeSimulation, audioAnalyzer) {}
    std::string fragmentShaderPath();
    std::vector<SmokeSimulation::Display> displayFields();

    void setup();
    void update();

private:
    float sideOffset;
    float bandSpacing;
};

#endif // SMOKEYBBQ_HORIZONTAL_SPECTRUM_HPP
