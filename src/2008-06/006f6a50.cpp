// roc 2008-06 006f6a50  unit: CXTPControlSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f6a50
//
// 006f6a50  56                   push esi
// 006f6a51  8bf1                 mov esi, ecx
// 006f6a53  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f6a56  85c9                 test ecx, ecx
// 006f6a58  741d                 je 0x6f6a77
// 006f6a5a  8b442408             mov eax, dword ptr [esp + 8]
// 006f6a5e  85c0                 test eax, eax
// 006f6a60  7415                 je 0x6f6a77
// 006f6a62  8b11                 mov edx, dword ptr [ecx]
// 006f6a64  50                   push eax
// 006f6a65  8b4230               mov eax, dword ptr [edx + 0x30]
// 006f6a68  ffd0                 call eax
// 006f6a6a  837e0800             cmp dword ptr [esi + 8], 0
// 006f6a6e  7507                 jne 0x6f6a77
// 006f6a70  85c0                 test eax, eax
// 006f6a72  7403                 je 0x6f6a77
// 006f6a74  894608               mov dword ptr [esi + 8], eax
// 006f6a77  5e                   pop esi
// 006f6a78  c20400               ret 4
// copied from an identical function in another client (function ?Set@CXTPControlSelector@ns_ROCX00004d@@QAEXPAX@Z)

namespace ns_ROCX00004d {
struct CXTPControlSelector {
    int m_nUnknown0;
    void* m_pUnknown4;
    void* m_pUnknown8;
    void Set(void* p);
};

void CXTPControlSelector::Set(void* p)
{
    if (m_pUnknown4 != 0 && p != 0) {
        void* result = ((void* (__thiscall*)(void*, void*))((*(void***)m_pUnknown4)[0x30 / 4]))(m_pUnknown4, p);
        if (m_pUnknown8 == 0 && result != 0) {
            m_pUnknown8 = result;
        }
    }
}
}
