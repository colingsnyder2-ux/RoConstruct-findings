// from server: 100% by colin
// roc 2007-08 005a9000  unit: RBX::VHumanoid::?$SignalDesc  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a9000
//
// 005a9000  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005a9003  8b01                 mov eax, dword ptr [ecx]
// 005a9005  8b5018               mov edx, dword ptr [eax + 0x18]
// 005a9008  6a00                 push 0
// 005a900a  ffd2                 call edx
// 005a900c  c3                   ret 

struct Inner {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void dispatch(int);
};

struct Outer {
    char pad[0x34];
    Inner* member;
    void fire();
};

void Outer::fire() {
    member->dispatch(0);
}
