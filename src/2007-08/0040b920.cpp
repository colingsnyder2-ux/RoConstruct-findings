// from server: 83% by colin
// roc 2007-08 0040b920  unit: VCBrowserViewExternal::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b920
//
// 0040b920  8b442404             mov eax, dword ptr [esp + 4]
// 0040b924  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040b927  8b08                 mov ecx, dword ptr [eax]
// 0040b929  89442404             mov dword ptr [esp + 4], eax
// 0040b92d  8b5108               mov edx, dword ptr [ecx + 8]
// 0040b930  ffe2                 jmp edx

struct Inner {
    void* vtbl;
};

struct Middle {
    char pad[0x18];
    Inner* inner;
};

struct Outer {
    void* vtbl;
};

extern "C" void __stdcall Target(Outer* p);
void __stdcall Target(Outer* p)
{
    Middle* m = (Middle*)p;
    Inner* in = m->inner;
    void** vt = (void**)in->vtbl;
    typedef void (__stdcall *Fn)(Inner*);
    Fn f = (Fn)vt[2];
    f(in);
}
