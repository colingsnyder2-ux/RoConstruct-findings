// from server: 53% by colin
struct S {
    void f(float);
};

extern float g_79646c;
extern double g_793198;
extern double g_79d420;
extern "C" void __stdcall sub_49fd90(int, int*);

void S::f(float arg)
{
    float v = arg;
    if (!(v < g_79646c) && !(v > 1.0f))
        v = 1.0f;
    int n = (int)((v + g_793198) * g_79d420);
    sub_49fd90(0x10, &n);
}
