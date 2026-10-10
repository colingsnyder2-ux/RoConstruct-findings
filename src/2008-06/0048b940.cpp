// from server: 89% by atomic.potato
typedef unsigned long DWORD;

struct S
{
    int f(int);
};

typedef int (__thiscall *Callback)(void *, void *, void *);

extern S *g_object;

int S::f(int value)
{
    void *p;
    if (this)
        p = (char *)this + 20;
    else
        p = 0;
    Callback callback = *(Callback *)*(DWORD *)((char *)g_object);
    return callback(g_object, p, &value);
}
