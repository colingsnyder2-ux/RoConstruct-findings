// from server: 67% by atomic.potato
extern "C" void ControlCall(void *, unsigned long);
extern "C" void GlobalCall(void *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    ControlCall(this, (unsigned long)value);
    *(unsigned long *)((char *)this + 0x2c) = 0;
    *(unsigned long *)((char *)this + 0x28) = 0;
    GlobalCall((char *)this + 0x24);
    return 0;
}
