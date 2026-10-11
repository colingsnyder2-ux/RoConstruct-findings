// from server: 97% by atomic.potato
extern "C" void __cdecl sub_006a165b(void *, unsigned int, unsigned int, const void *);
extern "C" void __cdecl sub_006a067a(void *);

struct PhysicsSender_004cfc90
{
    void f();
};

void PhysicsSender_004cfc90::f()
{
    if (*((unsigned int *)((char *)this + 8)) > 0)
    {
        void *p = *((void **)this);
        if (p != 0)
        {
            void *q = (char *)p - 4;
            sub_006a165b(p, 8, *((unsigned int *)q), (const void *)0x0047d410);
            sub_006a067a(q);
        }
    }
}
