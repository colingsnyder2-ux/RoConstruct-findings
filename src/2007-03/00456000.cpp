// roc 2007-03 00456000  unit: seg_00450000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00456000
//
// 00456000  8b01                 mov eax, dword ptr [ecx]
// 00456002  85c0                 test eax, eax
// 00456004  740c                 je 0x456012
// 00456006  8d4828               lea ecx, [eax + 0x28]
// 00456009  8b01                 mov eax, dword ptr [ecx]
// 0045600b  8b5004               mov edx, dword ptr [eax + 4]
// 0045600e  6a01                 push 1
// 00456010  ffd2                 call edx
// 00456012  c3                   ret 
// copied from an identical function in another client (function ?func@CRobloxWnd@ns_ROCX000033@@QAEXXZ)

namespace ns_ROCX000033 {
struct Inner {
    virtual void v0();
    virtual void v1(int);
};

struct Holder {
    char pad[0x28];
    Inner inner;
};

struct CRobloxWnd {
    Holder* field0;
    void func();
};

void CRobloxWnd::func()
{
    if (field0 != 0)
        field0->inner.v1(1);
}
}
