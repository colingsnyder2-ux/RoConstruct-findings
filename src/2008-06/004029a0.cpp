// from server: 100% by tester
// roc 2008-06 004029a0  unit: VCWorkspace::?$CComContainedObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004029a0
//
// 004029a0  8b442404             mov eax, dword ptr [esp + 4]
// 004029a4  8b4020               mov eax, dword ptr [eax + 0x20]
// 004029a7  8b08                 mov ecx, dword ptr [eax]
// 004029a9  89442404             mov dword ptr [esp + 4], eax
// 004029ad  8b01                 mov eax, dword ptr [ecx]
// 004029af  ffe0                 jmp eax

struct GUID { unsigned long Data1; unsigned short Data2, Data3; unsigned char Data4[8]; };

struct IUnknown {
    virtual long __stdcall QueryInterface(const GUID& iid, void** ppvObject) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

class CWorkspaceContained : public IUnknown {
public:
    char pad[0x1c];
    IUnknown* m_pOuterUnknown;

    long __stdcall QueryInterface(const GUID& iid, void** ppvObject);
    unsigned long __stdcall AddRef();
    unsigned long __stdcall Release();
};

long __stdcall CWorkspaceContained::QueryInterface(const GUID& iid, void** ppvObject)
{
    return m_pOuterUnknown->QueryInterface(iid, ppvObject);
}
