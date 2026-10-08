// from server: 90% by colin
// roc 2007-08 00670ba0  unit: CXTPToolBar::CControlButtonExpand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00670ba0
//
// 00670ba0  56                   push esi
// 00670ba1  8bf1                 mov esi, ecx
// 00670ba3  e85894fcff           call 0x63a000
// 00670ba8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00670bac  8b10                 mov edx, dword ptr [eax]
// 00670bae  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 00670bb4  51                   push ecx
// 00670bb5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00670bb9  56                   push esi
// 00670bba  51                   push ecx
// 00670bbb  8bc8                 mov ecx, eax
// 00670bbd  ffd2                 call edx
// 00670bbf  5e                   pop esi
// 00670bc0  c20800               ret 8

struct CControlButtonExpand;

struct Inner {
    virtual void vfunc_90(int, CControlButtonExpand*, int);
};

struct CControlButtonExpand {
    void method(int, int);
};

extern Inner* getInner();

void CControlButtonExpand::method(int a, int b)
{
    Inner* p = getInner();
    p->vfunc_90(a, this, b);
}
