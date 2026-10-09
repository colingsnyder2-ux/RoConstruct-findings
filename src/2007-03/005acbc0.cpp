// roc 2007-03 005acbc0  unit: seg_005a0000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005acbc0
//
// 005acbc0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 005acbc3  8b01                 mov eax, dword ptr [ecx]
// 005acbc5  8b5018               mov edx, dword ptr [eax + 0x18]
// 005acbc8  6a00                 push 0
// 005acbca  ffd2                 call edx
// 005acbcc  c3                   ret 
// copied from an identical function in another client (function ?fire@Outer@ns_ROCX000003@@QAEXXZ)

namespace ns_ROCX000003 {
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
}
