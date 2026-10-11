// from server: 68% by atomic.potato
extern "C" void *sub_74d140(int *);

extern "C" void sub_74c6d0(void *, int, int, int);

struct EventDesc
{
    int f(int, int, int);
};

int EventDesc::f(int a, int b, int c)
{
    int zero = 0;
    void *p = sub_74d140(&zero);
    sub_74c6d0(p, a, b, c);
    return a;
}
