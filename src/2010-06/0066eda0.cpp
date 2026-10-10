// from server: 31% by atomic.potato
struct S
{
    int f();
};

struct T
{
    void (__thiscall *destroy)(T *, int);
};

extern "C" void sub_4aa5c0(void *);

int S::f()
{
    T *a = *(T **)((char *)this + 0x50);
    int state = 1;

    if (a != 0)
        a->destroy(a, 1);

    a = *(T **)((char *)this + 0x48);
    state = 0;

    if (a != 0)
        a->destroy(a, 1);

    state = 2;
    sub_4aa5c0((char *)this + 0x18);

    *(int *)this = 0xA00918;
    return 0;
}
