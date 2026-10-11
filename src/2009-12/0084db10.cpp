// from server: 29% by atomic.potato
struct CXTPPropertyGrid
{
    char pad0[0x144];
    void* m_pSomething;

    void SomeMethod();
};

struct Inner1
{
    void Inner1_ctor();
    void Inner1_dtor();
};

struct Inner2
{
    void Inner2_ctor();
    void Inner2_dtor();
};

struct Inner3
{
    void Inner3_ctor();
    void Inner3_dtor();
};

extern "C" void __cdecl sub_7f41f0(void*);
extern "C" void __cdecl sub_7f41ea(void*);
extern "C" void __cdecl sub_7f539a(void);
extern "C" void __cdecl sub_84b400(void*, void*);
extern "C" void __cdecl sub_84b540(void*);

void CXTPPropertyGrid::SomeMethod()
{
    Inner1 a;
    Inner2 b;
    Inner3 c;

    sub_7f41f0(&a);
    sub_84b400(&b, &a);

    void* p = m_pSomething;
    void** vtbl = *(void***)p;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[4];
    fn(p, &c);

    sub_84b540(&c);
    sub_7f41ea(&a);
}
