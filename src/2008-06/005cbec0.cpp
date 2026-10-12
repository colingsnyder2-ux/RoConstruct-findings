// from server: 63% by king_originala
extern const float lowerBound;
extern const float upperBound;
extern const float inversePeriod;
extern const float period;

extern "C" double __cdecl floor(double);
#pragma intrinsic(floor)

float __cdecl wrap(float value)
{
    if (value >= lowerBound && value < upperBound)
        return value;

    float turns = (float)floor((value + upperBound) * inversePeriod);
    return value - (int)turns * period;
}
