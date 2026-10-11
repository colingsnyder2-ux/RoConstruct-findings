// from server: 65% by atomic.potato
struct S
{
    int f(int);
};

typedef void* (__thiscall *GetObject)(void*);
typedef int (__thiscall *Invoke)(void*, void*, void*, void*, int);

int S::f(int a)
{
    void* p;
    void* q;

    p = ((GetObject)0x804590)((char*)this + 0x100);
    q = *(void**)((char*)p + 0x144);
    return ((Invoke)q)(p, &a, this, (void*)1, 1);
}
