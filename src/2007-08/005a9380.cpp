// from server: 68% by colin
// roc 2007-08 005a9380  unit: RBX::VHumanoid::?$SignalDesc  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9380
//
// 005a9380  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a9383  8b01                 mov eax, dword ptr [ecx]
// 005a9385  8b500c               mov edx, dword ptr [eax + 0xc]
// 005a9388  ffd2                 call edx
// 005a938a  8b4020               mov eax, dword ptr [eax + 0x20]
// 005a938d  c3                   ret 

struct Inner {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual int f3();
};

struct Outer {
    char pad[0x34];
    Inner* inner;
    int get();
};

int Outer::get()
{
    Inner* p = inner;
    p->f3();
    return *(int*)((char*)p + 0x20);
}
