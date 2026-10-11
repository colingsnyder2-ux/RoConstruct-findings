// from server: 60% by atomic.potato
extern "C" void* __cdecl sub_6c8f40(int);
extern "C" void __cdecl sub_6c85b0(void*, int, int, int);

struct EventDesc
{
    int f(int, int, int);
};

int EventDesc::f(int a, int b, int c)
{
    void* p = sub_6c8f40(0);
    sub_6c85b0(p, a, b, c);
    return a;
}
