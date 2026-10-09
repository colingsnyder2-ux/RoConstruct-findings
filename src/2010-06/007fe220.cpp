// roc 2010-06 007fe220  unit: CXTPControlSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fe220
//
// 007fe220  56                   push esi
// 007fe221  8bf1                 mov esi, ecx
// 007fe223  8b4e04               mov ecx, dword ptr [esi + 4]
// 007fe226  85c9                 test ecx, ecx
// 007fe228  741d                 je 0x7fe247
// 007fe22a  8b442408             mov eax, dword ptr [esp + 8]
// 007fe22e  85c0                 test eax, eax
// 007fe230  7415                 je 0x7fe247
// 007fe232  8b11                 mov edx, dword ptr [ecx]
// 007fe234  50                   push eax
// 007fe235  8b4230               mov eax, dword ptr [edx + 0x30]
// 007fe238  ffd0                 call eax
// 007fe23a  837e0800             cmp dword ptr [esi + 8], 0
// 007fe23e  7507                 jne 0x7fe247
// 007fe240  85c0                 test eax, eax
// 007fe242  7403                 je 0x7fe247
// 007fe244  894608               mov dword ptr [esi + 8], eax
// 007fe247  5e                   pop esi
// 007fe248  c20400               ret 4
// copied from an identical function in another client (function ?Set@CXTPControlSelector@ns_ROCX000014@@QAEXPAX@Z)

namespace ns_ROCX000014 {
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
