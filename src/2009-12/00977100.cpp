// from server: 75% by atomic.potato
struct S {
    void f();
};

extern "C" void G1_func_006f3060(
    int, int, int, int, int);

extern "C" void __cdecl G2_func_007f4929(int);

void S::f()
{
    G1_func_006f3060(0xB944FC, 0x9DC4CC, 0x9DC494, 0x71D200, 0x71D370);
    G2_func_007f4929(0x986E00);
}
