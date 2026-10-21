// from server: 90% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: rbxgs-dll roc_espeon_blendbranchunit1dd200d01572ad8d.cpp

// Candidate translation unit (score above; library headers required).
#include <G3D/g3dmath.h>
#pragma float_control(precise, off)

extern const float blendOffset;
extern const float blendScale;
extern const float darkScale;
extern const float lightScale;
extern const double normalizeScale;
extern const double outputScale;



template<class T>
const T& smaller(const T& a, const T& b)
{
    return b < a ? b : a;
}

void __cdecl blend(const unsigned char* source, unsigned char* output)
{
    int zero = 0;
    int maximum = 255;
    int offset = source - output;
    int count = 3;

    do
    {
        int amount = *output;
        float scale = blendScale;
        float value = (float)output[offset];

        if (amount > 130)
        {
            float one = 1.0f;
            float factor = ((float)amount - blendOffset) * scale;
            float weight = smaller(factor, one);
            value = value * (one - weight) + weight * lightScale;
        }
        else if (amount < 126)
        {
            value = (1.0f + (float)amount * scale) * darkScale * value;
        }

        int result = G3D::iRound(pow(value * normalizeScale, 1.0) * outputScale);
        *output = (unsigned char)(std::min(maximum, std::max(zero, result)));
        ++output;
    }
    while (--count);
}
