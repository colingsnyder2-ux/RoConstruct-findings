// from server: 56% by atomic.potato
struct S
{
    void *f();
};

extern "C" void *__cdecl helper1(void *);

struct T
{
    void __thiscall helper2(void *, void *, void *, void *);
};

void *S::f()
{
    void *p;
    void *a;
    void *b;
    void *c;

    p = helper1(0);
    a = *(void **)((char *)&p + 0x14);
    b = *(void **)((char *)&p + 0x10);
    c = *(void **)((char *)&p + 0x0c);
    ((T *)p)->helper2(a, b, c, 0);
    return c;
}
