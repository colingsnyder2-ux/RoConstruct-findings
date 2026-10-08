// from server: 83% by colin
// roc 2007-08 0040b900  unit: VCBrowserViewExternal::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b900
//
// 0040b900  8b442404             mov eax, dword ptr [esp + 4]
// 0040b904  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040b907  8b08                 mov ecx, dword ptr [eax]
// 0040b909  89442404             mov dword ptr [esp + 4], eax
// 0040b90d  8b5104               mov edx, dword ptr [ecx + 4]
// 0040b910  ffe2                 jmp edx

struct Inner {
    void* pad0;
    void* m_vtbl_4;
};

struct Outer {
    char pad0[0x18];
    Inner* m_inner;
};

struct S {
    void f(Outer* p);
};

void S::f(Outer* p)
{
    Inner* inner = p->m_inner;
    void** vtbl = *(void***)inner;
    typedef void (__stdcall *Fn)(Inner*);
    Fn fn = (Fn)vtbl[1];
    fn(inner);
}
