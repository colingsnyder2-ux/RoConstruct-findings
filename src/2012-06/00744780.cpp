// from server: 72% by atomic.potato
extern "C" void __stdcall sub_7444E0(void *, void *);

struct S {
    int f(void *);
};

int S::f(void *arg)
{
    sub_7444E0(this, arg);
    *(unsigned long *)((char *)this + 0x28) = 0x00B43C34;
    *(unsigned long *)this = 0x00BAA978;
    *(unsigned long *)((char *)this + 0x14) = 0x00BAA970;
    *(unsigned long *)((char *)this + 0x28) = 0x00BAA960;
    return 0;
}
