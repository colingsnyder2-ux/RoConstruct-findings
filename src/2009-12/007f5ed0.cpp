// from server: 75% by atomic.potato
typedef void (__thiscall *Fn0)(int, int);

extern "C" void Call8065A0(void* p, int a, int b);

struct CRobloxControlColorSelector
{
    void f();
    void* pad[64];
};

void CRobloxControlColorSelector::f()
{
    Call8065A0(pad[64], -1, 0);
    void* p = pad[64];
    void** vtable = *(void***)p;
    Fn0 fn = *(Fn0*)((char*)vtable + 0x150);
    fn(-1, 0);
}
