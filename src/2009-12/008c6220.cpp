// from server: 55% by atomic.potato
extern "C" void sub_7f43e2(void *);

typedef void (__cdecl *Call)(void *);

struct S
{
    int f();
};

int S::f()
{
    char *p = (char *)this;
    *(int *)p = 0xA09A9C;
    ((Call)0x98DEC0)(p + 0x54);
    ((Call)0x98DEC0)(p + 0x48);
    sub_7f43e2(this);
    return 0;
}
