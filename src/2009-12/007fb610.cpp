// from server: 36% by atomic.potato
typedef void (__thiscall *Callback)(void *, void *);

struct S
{
    void f(void *);
};

void S::f(void *arg)
{
    unsigned char *p = (unsigned char *)this + 0x60;
    Callback fn = *(Callback *)(*(unsigned long *)p + 0x170);
    fn(p, arg);
}
