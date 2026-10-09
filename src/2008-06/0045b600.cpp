// roc 2008-06 0045b600  unit: CRobloxWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b600
//
// 0045b600  8b01                 mov eax, dword ptr [ecx]
// 0045b602  85c0                 test eax, eax
// 0045b604  740c                 je 0x45b612
// 0045b606  8d4828               lea ecx, [eax + 0x28]
// 0045b609  8b01                 mov eax, dword ptr [ecx]
// 0045b60b  8b5004               mov edx, dword ptr [eax + 4]
// 0045b60e  6a01                 push 1
// 0045b610  ffd2                 call edx
// 0045b612  c3                   ret 
// copied from an identical function in another client (function ?func@CRobloxWnd@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
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
