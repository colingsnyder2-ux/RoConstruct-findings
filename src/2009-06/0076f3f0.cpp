// roc 2009-06 0076f3f0  unit: CXTPControlSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076f3f0
//
// 0076f3f0  56                   push esi
// 0076f3f1  8bf1                 mov esi, ecx
// 0076f3f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0076f3f6  85c9                 test ecx, ecx
// 0076f3f8  741d                 je 0x76f417
// 0076f3fa  8b442408             mov eax, dword ptr [esp + 8]
// 0076f3fe  85c0                 test eax, eax
// 0076f400  7415                 je 0x76f417
// 0076f402  8b11                 mov edx, dword ptr [ecx]
// 0076f404  50                   push eax
// 0076f405  8b4230               mov eax, dword ptr [edx + 0x30]
// 0076f408  ffd0                 call eax
// 0076f40a  837e0800             cmp dword ptr [esi + 8], 0
// 0076f40e  7507                 jne 0x76f417
// 0076f410  85c0                 test eax, eax
// 0076f412  7403                 je 0x76f417
// 0076f414  894608               mov dword ptr [esi + 8], eax
// 0076f417  5e                   pop esi
// 0076f418  c20400               ret 4
// copied from an identical function in another client (function ?Set@CXTPControlSelector@ns_ROCX000048@@QAEXPAX@Z)

namespace ns_ROCX000048 {
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
