// from server: 77% by atomic.potato
extern "C" void __cdecl exit(int);

struct S
{
    void __cdecl f();
};

void __cdecl helper(S *);

void __cdecl S::f()
{
    void (**vtable)(S *) = *(void (***)(S *))this;
    vtable[2](this);
    helper(this);
    exit(1);
}
