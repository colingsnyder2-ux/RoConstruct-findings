// from server: 82% by atomic.potato
extern "C" int __cdecl sub_007f5286(int);
extern "C" int sub_0098b768(int, int);

struct TToolVerb
{
    int pad0[3];
    int value;
    int f();
};

int TToolVerb::f()
{
    int a;
    int b;
    a = *(int *)((char *)this + 12);
    b = *(int *)((char *)a + 2704);
    a = *(int *)((char *)b + 436);
    if (a == 0)
        return 0;
    a = sub_007f5286(a);
    return sub_0098b768(0x00B3FC50, a);
}
