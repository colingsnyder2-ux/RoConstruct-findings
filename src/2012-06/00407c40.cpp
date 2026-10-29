// roc 2012-06 00407c40  unit: VCApp::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00407c40
//
// 00407c40  8b442404             mov eax, dword ptr [esp + 4]
// 00407c44  8b4018               mov eax, dword ptr [eax + 0x18]
// 00407c47  8b08                 mov ecx, dword ptr [eax]
// 00407c49  89442404             mov dword ptr [esp + 4], eax
// 00407c4d  8b01                 mov eax, dword ptr [ecx]
// 00407c4f  ffe0                 jmp eax
// copied from an identical function in another client (function ?QueryInterface@CAppContained@@UAGJABUGUID@@PAPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct GUID { unsigned long Data1; unsigned short Data2, Data3; unsigned char Data4[8]; };

struct IUnknown {
    virtual long __stdcall QueryInterface(const GUID& iid, void** ppvObject) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

class CAppContained : public IUnknown {
public:
    char pad[0x14];
    IUnknown* m_pOuterUnknown;

    long __stdcall QueryInterface(const GUID& iid, void** ppvObject);
    unsigned long __stdcall AddRef();
    unsigned long __stdcall Release();
};

long __stdcall CAppContained::QueryInterface(const GUID& iid, void** ppvObject)
{
    return m_pOuterUnknown->QueryInterface(iid, ppvObject);
}