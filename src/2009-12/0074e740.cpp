// from server: 28% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" void* __cdecl sub_74d1e0();
extern "C" void __cdecl sub_74c810(void*, int, int, int);

int EventDesc::f(int a, int b, int c)
{
    sub_74d1e0();
    void* p = sub_74d1e0();
    sub_74c810(p, c, b, a);
    return c;
}
