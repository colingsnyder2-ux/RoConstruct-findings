// from server: 59% by atomic.potato
extern "C" void __cdecl fn_0051d700(
    int, int, int, int, int, int);

extern "C" void __cdecl fn_007f4929(int);

struct S
{
    void f();
};

void S::f()
{
    fn_0051d700(0xb7ef18, 0x512850, 0, 0x9bb998, 0x9bb9a8, 1);
    fn_007f4929(0x97fcf0);
}
