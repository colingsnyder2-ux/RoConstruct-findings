// from server: 51% by atomic.potato
struct S
{
    int __cdecl f(int, int);
};

extern "C" int __cdecl callee(S *, int *);

int S::f(int a, int b)
{
    int *p = &b;
    callee(this, p);
    return (int)this;
}
