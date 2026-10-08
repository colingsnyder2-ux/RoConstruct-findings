// from server: 100% by colin
// roc 2007-08 005a93a0  unit: RBX::VHumanoid::?$SignalDesc  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a93a0
//
// 005a93a0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a93a3  8b01                 mov eax, dword ptr [ecx]
// 005a93a5  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a93a8  ffd2                 call edx
// 005a93aa  8b4038               mov eax, dword ptr [eax + 0x38]
// 005a93ad  c3                   ret 

struct Inner {
    virtual Inner* a();
    virtual Inner* b();
    virtual Inner* c();
    virtual Inner* d();
};

struct Outer {
    char pad[0x34];
    Inner* inner;
    int get();
};

int Outer::get()
{
    Inner* p = inner;
    Inner* q = p->d();
    return *(int*)((char*)q + 0x38);
}
