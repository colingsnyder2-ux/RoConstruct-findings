// from server: 68% by colin
// roc 2007-08 0040b940  unit: VCBrowserViewExternal::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b940
//
// 0040b940  8b442404             mov eax, dword ptr [esp + 4]
// 0040b944  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040b947  8b08                 mov ecx, dword ptr [eax]
// 0040b949  89442404             mov dword ptr [esp + 4], eax
// 0040b94d  8b01                 mov eax, dword ptr [ecx]
// 0040b94f  ffe0                 jmp eax

struct Inner {
    virtual int f();
};

struct Mid {
    char pad[0x18];
    Inner* p;
};

struct Outer {
    int g(Mid* m);
};

int Outer::g(Mid* m)
{
    Inner* p = m->p;
    int (Inner::*pmf)() = &Inner::f;
    return (p->*pmf)();
}
