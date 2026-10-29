// roc 2012-06 00407c20  unit: VCApp::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407c20
//
// 00407c20  8b442404             mov eax, dword ptr [esp + 4]
// 00407c24  8b4018               mov eax, dword ptr [eax + 0x18]
// 00407c27  8b08                 mov ecx, dword ptr [eax]
// 00407c29  89442404             mov dword ptr [esp + 4], eax
// 00407c2d  8b5108               mov edx, dword ptr [ecx + 8]
// 00407c30  ffe2                 jmp edx
// copied from an identical function in another client (function ?Release@Contained@@QAGKXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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