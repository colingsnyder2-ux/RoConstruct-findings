// from server: 85% by atomic.potato
struct TToolVerb
{
    int *p;
    int f();
};

extern "C" int __cdecl sub_007f5286(int);
extern "C" int __cdecl sub_0098b768(int, int);

int TToolVerb::f()
{
    int *a = *(int **)((char *)this + 0xc);
    int *b = *(int **)((char *)a + 0xa90);
    int v = *(int *)((char *)b + 0x1b4);
    if (v)
        return sub_0098b768(0xb3f960, sub_007f5286(v));
    return 0;
}
