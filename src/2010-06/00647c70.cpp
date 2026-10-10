// from server: 85% by atomic.potato
struct TToolVerb
{
    int f();
};

extern "C" int __cdecl sub_7a93c6(int);
extern "C" int sub_9ea8d8(int, int);

int TToolVerb::f()
{
    int a;
    int b;
    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2720);
    a = *(int *)((char *)b + 436);
    if (a)
    {
        a = sub_7a93c6(a);
        return sub_9ea8d8(0xBB7348, a);
    }
    return 0;
}
