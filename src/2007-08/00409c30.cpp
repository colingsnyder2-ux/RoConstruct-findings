// from server: 100% by colin
// roc 2007-08 00409c30  unit: VCApp::?$CComObject  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409c30
//
// 00409c30  8b442404             mov eax, dword ptr [esp + 4]
// 00409c34  83402801             add dword ptr [eax + 0x28], 1
// 00409c38  8b4028               mov eax, dword ptr [eax + 0x28]
// 00409c3b  c20400               ret 4

struct CComObjectLike {
    unsigned char pad[0x28];
    unsigned long m_dwRef;
    unsigned long __stdcall AddRef();
};

unsigned long __stdcall CComObjectLike::AddRef()
{
    return ++m_dwRef;
}
