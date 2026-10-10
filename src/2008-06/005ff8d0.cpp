// from server: 83% by atomic.potato
extern "C" void CallA(void *, int);
extern "C" void CallB(void *, const void *);

struct S
{
    int f(int);
};

int S::f(int value)
{
    if (value != *(int *)((char *)this + 0x1c4))
    {
        CallA(this, value);
        CallB(this, (const void *)0x97b7e0);
    }
    return 0;
}
