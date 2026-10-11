// from server: 75% by atomic.potato
struct S
{
    void f();
};

extern "C" void G1_func_006f35f0(int, int, int, int, int);
extern "C" void __cdecl G2_func_007f4929(int);

void S::f()
{
    G1_func_006f35f0(0x9dc5b0, 0x9ba730, 0x71d1e0, 0x71d320, 0x0f);
    G2_func_007f4929(0x987020);
}
