// from server: 71% by king_originala
void __cdecl operator delete(void *);

struct Temporary
{
    mutable int *p;

    ~Temporary()
    {
        if (p)
            operator delete(p);
    }
};

struct Owner
{
    int *p;

    Owner(const Temporary &other) : p(other.p)
    {
        other.p = 0;
    }

    Owner(Owner &other) : p(other.p)
    {
        other.p = 0;
    }

    ~Owner()
    {
        if (p)
            operator delete(p);
    }
};

Temporary __cdecl func_005cfaf0(int, int, int, int);
void *__cdecl func_005d0420();

struct Base
{
    Base(void *, int, int, Owner, int);
    virtual void vfunc();
};

struct S : Base
{
    S(int, int, int, int, int, int);
    virtual void vfunc();
};

S::S(int a1, int a2, int a3, int a4, int a5, int a6)
    : Base(func_005d0420(), a1, a2,
           func_005cfaf0(a3, a4, a5, a6), a6)
{
}
