// from server: 61% by colin
// roc 2007-08 005993f0  unit: RBX::ControllerService  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005993f0

extern "C" double __cdecl _CIpow(double, double);

extern float g_7b1544;
extern float g_797b30;
extern float g_7b1540;
extern float g_7b1538;

struct RBX_ControllerService
{
    float method(float x);
};

float RBX_ControllerService::method(float x)
{
    float a = g_7b1544;
    if (x < a || x > g_797b30)
    {
        double d = (double)(x + a) * (double)g_7b1540;
        float r = (float)_CIpow(d, 0.0);
        int i = (int)r;
        return x - (float)i * g_7b1538;
    }
    return x;
}
