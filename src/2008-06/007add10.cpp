// from server: 66% by colin
#pragma float_control(precise, off)

extern const float blendOffset;
extern const float blendScale;
extern const float darkScale;
extern const float lightScale;
extern const double normalizeScale;
extern const double outputScale;

extern "C" double __cdecl pow(double, double);
#pragma intrinsic(pow)

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
        float one = 1.0f;
        float scale = blendScale;
        float value = (float)output[offset];

        if (amount > 130)
        {
            float factor = ((float)amount - blendOffset) * scale;
            float weight = smaller(factor, one);
            value = value * (one - weight) + weight * lightScale;
        }
        else if (amount < 126)
        {
            value = (one + (float)amount * scale) * darkScale * value;
        }

        int result = (int)(pow(value * normalizeScale, 1.0) * outputScale);
        *output = (unsigned char)(result > 0 ? smaller(maximum, result) : zero);
        ++output;
    }
    while (--count);
}
