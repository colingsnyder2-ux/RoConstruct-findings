// from server: 57% by atomic.potato
extern "C" void __cdecl sub_00546070(void *, int);

struct S
{
    void f(void *);
};

void S::f(void *p)
{
    sub_00546070(p, 0);
}
