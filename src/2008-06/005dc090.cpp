// from server: 78% by colin
struct S
{
    void f(float* arg);
    float value[0x1b0 / sizeof(float) + 1];
};

extern "C" void __cdecl sub_0040db00(float* arg, const char* name);

void S::f(float* arg)
{
    if (*arg == value[0x1b0 / sizeof(float)])
        return;

    value[0x1b0 / sizeof(float)] = *arg;
    sub_0040db00(arg, (const char*)0x97a2d8);
}
