// from server: 56% by Intel
extern "C" float __cdecl _fltused;

namespace RBX {
    struct SpatialFilter {
        float method(float value);
    };
}

float RBX::SpatialFilter::method(float value)
{
    extern const float multiplier;
    return value * multiplier;
}

const float multiplier = *reinterpret_cast<const float*>(0x00B6E61C);
