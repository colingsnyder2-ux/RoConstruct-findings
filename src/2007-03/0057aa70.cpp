// roc 2007-03 0057aa70  unit: seg_00570000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057aa70
//
// 0057aa70  8b09                 mov ecx, dword ptr [ecx]
// 0057aa72  85c9                 test ecx, ecx
// 0057aa74  7409                 je 0x57aa7f
// 0057aa76  8b01                 mov eax, dword ptr [ecx]
// 0057aa78  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0057aa7b  6a01                 push 1
// 0057aa7d  ffd2                 call edx
// 0057aa7f  c3                   ret 
// copied from an identical function in another client (function ?func@Outer@ns_ROCX000008@@QAEXXZ)

namespace ns_ROCX000008 {
struct Inner {
    virtual void vfunc1();
    virtual void vfunc2();
    virtual void vfunc3();
    virtual void vfunc4();
    virtual void vfunc5();
    virtual void vfunc6();
    virtual void vfunc7();
    virtual void vfunc8();
    virtual void vfunc9();
    virtual void vfunc10();
    virtual void vfunc11();
    virtual void vfunc12(int);
};

struct Outer {
    Inner* ptr;
    void func();
};

void Outer::func() {
    Inner* p = ptr;
    if (p) {
        p->vfunc12(1);
    }
}
}
