// from server: 97% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl Function007A8ADE(void *, unsigned int, void *, const void *);
extern "C" void __cdecl Function007A7C46(void *);

struct ClientReplicator
{
    void f();
};

void ClientReplicator::f()
{
    if (*(DWORD *)((char *)this + 8) > 0)
    {
        void *p = *(void **)this;
        if (p != 0)
        {
            void *q = (char *)p - 4;
            Function007A8ADE(p, 8, *(void **)q, (const void *)0x4545B0);
            Function007A7C46(q);
        }
    }
}
