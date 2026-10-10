// from server: 65% by atomic.potato
struct P_007a7af0
{
    void f(void*, int);
};

struct P_0080a058
{
    void __cdecl f(void*);
};

struct S_007a7bb0
{
    void __cdecl f(void*);
};

void S_007a7bb0::f(void* p)
{
    if (p != 0)
    {
        P_007a7af0* a = (P_007a7af0*)0x7a7af0;
        P_0080a058* b = (P_0080a058*)0x80a058;
        a->f(p, *(int*)((char*)p + 20));
        b->f(p);
    }
}
