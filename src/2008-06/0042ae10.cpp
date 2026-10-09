// roc 2008-06 0042ae10  unit: EventHandler  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042ae10
//
// 0042ae10  8b442404             mov eax, dword ptr [esp + 4]
// 0042ae14  ff4028               inc dword ptr [eax + 0x28]
// 0042ae17  8b4028               mov eax, dword ptr [eax + 0x28]
// 0042ae1a  c20400               ret 4
// copied from an identical function in another client (function ?AddRef@CComObjectLike@ns_ROCX00003d@@QAGKXZ)

namespace ns_ROCX00003d {
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
