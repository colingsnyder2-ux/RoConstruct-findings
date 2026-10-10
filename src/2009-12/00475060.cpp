// from server: 70% by atomic.potato
extern "C" void __cdecl sub_00474f10(float, int, int, int, int, int);

struct DxUserInput
{
    void __cdecl f(int, int, int, int);
};

void DxUserInput::f(int a, int b, int c, int d)
{
    sub_00474f10(0.0f, d, a, b, c, 6);
}
