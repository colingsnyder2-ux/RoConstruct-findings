// from server: 85% by atomic.potato
struct TToolVerb
{
    int f();
};

extern "C" int __cdecl sub_007a93c6(int);
extern "C" int __cdecl sub_009ea8d8(int, int);

int TToolVerb::f()
{
    int a;
    int b;
    int c;

    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2720);
    c = *(int *)((char *)b + 436);
    if (c)
    {
        c = sub_007a93c6(c);
        return sub_009ea8d8(0x00bb6b28, c);
    }
    return 0;
}
