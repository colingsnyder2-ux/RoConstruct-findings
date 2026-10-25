// from server: 100% by tester
// roc 2008-06 00407f50  unit: VCApp::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00407f50
//
// 00407f50  8b442404             mov eax, dword ptr [esp + 4]
// 00407f54  8b4018               mov eax, dword ptr [eax + 0x18]
// 00407f57  8b08                 mov ecx, dword ptr [eax]
// 00407f59  89442404             mov dword ptr [esp + 4], eax
// 00407f5d  8b01                 mov eax, dword ptr [ecx]
// 00407f5f  ffe0                 jmp eax

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
