// from server: 69% by Yeetserama
struct IPipelined {
    bool __cdecl f(const float* a, const float* b);
};

bool IPipelined::f(const float* a, const float* b)
{
    float dx = b[0] - a[0];
    float dy = b[1] - a[1];
    float dz = b[2] - a[2];
    float d = dx * dx + dy * dy + dz * dz;
    return d > 0.0f;
}
