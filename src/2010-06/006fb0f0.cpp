// from server: 39% by atomic.potato
struct EventDesc
{
    int f(int, int, int);
};

extern "C" void __cdecl sub_6faf60();

struct Caller
{
    void f(int, int, int);
};

extern "C" void __cdecl sub_6f96e0(void *, int, int, int);

int EventDesc::f(int a, int b, int c)
{
    sub_6faf60();
    sub_6f96e0(0, c, b, a);
    return c;
}
