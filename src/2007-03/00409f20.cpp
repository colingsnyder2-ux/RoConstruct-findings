// roc 2007-03 00409f20  unit: seg_00400000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00409f20
//
// 00409f20  8b442404             mov eax, dword ptr [esp + 4]
// 00409f24  83402801             add dword ptr [eax + 0x28], 1
// 00409f28  8b4028               mov eax, dword ptr [eax + 0x28]
// 00409f2b  c20400               ret 4
// copied from an identical function in another client (function ?AddRef@CComObjectLike@ns_ROCX00000e@@QAGKXZ)

namespace ns_ROCX00000e {
struct CComObjectLike {
    unsigned char pad[0x28];
    unsigned long m_dwRef;
    unsigned long __stdcall AddRef();
};

unsigned long __stdcall CComObjectLike::AddRef()
{
    return ++m_dwRef;
}
}
