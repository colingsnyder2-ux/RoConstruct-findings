// from server: 100% by tester
// roc 2008-06 00402960  unit: VCWorkspace::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00402960
//
// 00402960  8b442404             mov eax, dword ptr [esp + 4]
// 00402964  8b4020               mov eax, dword ptr [eax + 0x20]
// 00402967  8b08                 mov ecx, dword ptr [eax]
// 00402969  89442404             mov dword ptr [esp + 4], eax
// 0040296d  8b5104               mov edx, dword ptr [ecx + 4]
// 00402970  ffe2                 jmp edx

struct IUnknown {
    virtual long __stdcall QueryInterface(const void* iid, void** object) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct Contained {
    char padding[32];
    IUnknown* outer;
    unsigned long __stdcall AddRef();
};

unsigned long __stdcall Contained::AddRef()
{
    return outer->AddRef();
}
