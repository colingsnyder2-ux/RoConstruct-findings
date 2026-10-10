// from server: 76% by atomic.potato
struct S
{
    int __cdecl f(S*);
};

int __cdecl S::f(S* p)
{
    if (!p)
        return 0;
    p = *(S**)((char*)p + 4);
    if (!p)
        return 1;
    return f(p) + 1;
}
