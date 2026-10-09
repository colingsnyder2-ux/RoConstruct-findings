// roc 2007-03 00713890  unit: seg_00710000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00713890
//
// 00713890  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 00713896  8b01                 mov eax, dword ptr [ecx]
// 00713898  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 0071389e  6a00                 push 0
// 007138a0  ffd2                 call edx
// 007138a2  c3                   ret 
// copied from an identical function in another client (function ?Hide@CControlButtonHide@ns_ROCX000011@@QAEXXZ)

namespace ns_ROCX000011 {
struct CControlButtonHide {
    void Hide();
};

struct Inner {
    virtual void vfunc();
};

struct Outer {
    char pad[0xfc];
    Inner* inner;
};

void CControlButtonHide::Hide()
{
    Outer* o = (Outer*)this;
    Inner* p = o->inner;
    void** vtbl = *(void***)p;
    typedef void (__thiscall *Fn)(Inner*, int);
    Fn f = (Fn)vtbl[0x15c / 4];
    f(p, 0);
}
}
