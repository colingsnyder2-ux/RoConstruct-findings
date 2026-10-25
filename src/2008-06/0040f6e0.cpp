// from server: 100% by tester
// roc 2008-06 0040f6e0  unit: VCApp::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f6e0
//
// 0040f6e0  8b442404             mov eax, dword ptr [esp + 4]
// 0040f6e4  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040f6e7  8b08                 mov ecx, dword ptr [eax]
// 0040f6e9  89442404             mov dword ptr [esp + 4], eax
// 0040f6ed  8b5108               mov edx, dword ptr [ecx + 8]
// 0040f6f0  ffe2                 jmp edx

struct IUnknown {
    virtual long __stdcall QueryInterface(const void* iid, void** object) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct Contained {
    char padding[24];
    IUnknown* outer;
    unsigned long __stdcall Release();
};

unsigned long __stdcall Contained::Release()
{
    return outer->Release();
}
