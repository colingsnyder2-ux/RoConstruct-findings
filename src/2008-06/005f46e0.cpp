// from server: 28% by atomic.potato




extern "C" void* __cdecl func_006a0920(unsigned int size);
extern "C" void __cdecl func_0047d410();

struct Inner {
    void ctor(int a, int b);
    void assign(int v);
};

struct Outer {
    Inner* field0;
    char pad[0x24];
    Outer(int a, int b);
};

void Inner::ctor(int a, int b) {}
void Inner::assign(int v) {}

Outer::Outer(int a, int b)
{
    Inner* p = (Inner*)func_006a0920(0x28);
    Inner* q = 0;
    if (p != 0)
        q = (Inner*)0;
    field0 = q;
    if (p != 0)
    {
        p->ctor(a, b);
        q = p;
    }
    field0 = q;
    if (q != 0)
        q->assign(0);
    func_0047d410();
}
