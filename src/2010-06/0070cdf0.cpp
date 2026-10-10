// from server: 31% by atomic.potato
struct S
{
    void *unused_00;
    void __cdecl f(void *p);
};

extern "C" void sub_70c520(S *, void *, int);

void S::f(void *p)
{
    sub_70c520(this, p, 0);
}
