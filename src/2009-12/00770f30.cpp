// from server: 68% by atomic.potato
extern "C" void *__cdecl sub_460e60(int *);
extern "C" void sub_76f130(void *, int, int, int);

struct EnumPropDescriptor
{
    int f(int, int, int);
};

int EnumPropDescriptor::f(int a, int b, int c)
{
    int x = 0;
    void *p = sub_460e60(&x);
    sub_76f130(p, a, b, c);
    return a;
}
