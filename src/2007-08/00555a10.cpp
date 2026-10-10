// from server: 76% by colin
struct S_func_00555a10 {
    int f();
};

extern "C" int __cdecl sub_00555990(int* a, int* b);
extern "C" double __cdecl sub_00631128(double x);

extern float g_78fef0;
extern float g_7a8380;
extern float g_7a8384;
extern float g_8c1e54;
extern float g_8c1e58;
extern int g_8c1e5c;

int S_func_00555a10::f()
{
    if (!(g_8c1e5c & 1)) {
        g_8c1e5c |= 1;
        g_8c1e54 = g_78fef0;
        g_8c1e58 = g_7a8384;
    }
    int local;
    sub_00555990(&local, (int*)&g_8c1e54);
    double d = (double)local * *(float*)&local;
    d = d * (double)g_7a8380;
    float r = (float)sub_00631128(d);
    return (int)r;
}
