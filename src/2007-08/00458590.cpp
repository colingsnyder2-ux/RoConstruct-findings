// from server: 100% by colin
// roc 2007-08 00458590  unit: CRobloxWnd  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458590
//
// 00458590  8b01                 mov eax, dword ptr [ecx]
// 00458592  85c0                 test eax, eax
// 00458594  740c                 je 0x4585a2
// 00458596  8d4828               lea ecx, [eax + 0x28]
// 00458599  8b01                 mov eax, dword ptr [ecx]
// 0045859b  8b5004               mov edx, dword ptr [eax + 4]
// 0045859e  6a01                 push 1
// 004585a0  ffd2                 call edx
// 004585a2  c3                   ret 

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
