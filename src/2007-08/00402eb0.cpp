// from server: 84% by colin
// roc 2007-08 00402eb0  unit: VCWorkspace::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402eb0
//
// 00402eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00402eb4  8b4030               mov eax, dword ptr [eax + 0x30]
// 00402eb7  8b08                 mov ecx, dword ptr [eax]
// 00402eb9  89442404             mov dword ptr [esp + 4], eax
// 00402ebd  8b5104               mov edx, dword ptr [ecx + 4]
// 00402ec0  ffe2                 jmp edx

struct Inner {
    void* pad0;
    void* fn;
};

struct Mid {
    char pad[0x30];
    Inner* inner;
};

struct Outer {
    void invoke(Mid* p);
};

void Outer::invoke(Mid* p)
{
    Inner* i = p->inner;
    void* f = *(void**)i;
    typedef void (__stdcall *Fn)(Inner*);
    ((Fn)f)(i);
}
