// from server: 86% by king_originala
extern float g_0081c430;
extern float g_0084afec;
extern float g_0084afe8;
extern float g_0084afe4;
extern float g_00843768;
extern float g_0084afe0;
extern float g_0084afdc;
extern float g_00819b48;

float __cdecl f(float x)
{
    if (g_0081c430 > x)
        return g_0084afec;
    if (x < g_0084afe8)
        return g_0084afe4;
    if (x < g_00843768)
        return g_0084afe0;
    if (g_0084afdc > x)
        return g_00819b48;
    return 1.0f;
}
