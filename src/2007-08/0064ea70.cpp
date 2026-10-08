// from server: 100% by colin
// roc 2007-08 0064ea70  unit: CXTPToolBar::CControlButtonHide  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064ea70
//
// 0064ea70  8b89fc000000         mov ecx, dword ptr [ecx + 0xfc]
// 0064ea76  8b01                 mov eax, dword ptr [ecx]
// 0064ea78  8b905c010000         mov edx, dword ptr [eax + 0x15c]
// 0064ea7e  6a00                 push 0
// 0064ea80  ffd2                 call edx
// 0064ea82  c3                   ret 

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
