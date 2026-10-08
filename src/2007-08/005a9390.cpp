// from server: 100% by colin
// roc 2007-08 005a9390  unit: RBX::VHumanoid::?$SignalDesc  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9390
//
// 005a9390  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a9393  8b01                 mov eax, dword ptr [ecx]
// 005a9395  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a9398  ffd2                 call edx
// 005a939a  8b402c               mov eax, dword ptr [eax + 0x2c]
// 005a939d  c3                   ret 

struct Inner {
    virtual Inner* f();
    virtual Inner* g();
    virtual Inner* h();
    virtual Inner* i();
};

struct Outer {
    char pad[0x34];
    Inner* inner;
    int get();
};

int Outer::get()
{
    Inner* p = inner;
    Inner* q = p->i();
    return *(int*)((char*)q + 0x2c);
}
