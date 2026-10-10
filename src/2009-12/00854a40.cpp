// from server: 65% by atomic.potato
struct S
{
    int f(int);
};

typedef int (__thiscall *Callback)(void *, int, int);

int S::f(int value)
{
    void *p = *(void **)((char *)this + 0x90);
    Callback callback = *(Callback *)(*(unsigned int *)p + 0x168);
    callback(p, value, 0);
    return value;
}
