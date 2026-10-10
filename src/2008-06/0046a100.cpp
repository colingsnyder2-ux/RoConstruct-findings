// from server: 68% by atomic.potato
extern "C" void __cdecl sub_0046a010(float, int, int, int, int, int);

struct DxUserInput_0046a100
{
    void __stdcall f(int, int, int, int);
};

void __stdcall DxUserInput_0046a100::f(int a, int b, int c, int d)
{
    sub_0046a010(0.0f, a, b, c, d, 6);
}
