// roc 2009-12 0084a180  unit: CXTPControlSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084a180
//
// 0084a180  56                   push esi
// 0084a181  8bf1                 mov esi, ecx
// 0084a183  8b4e04               mov ecx, dword ptr [esi + 4]
// 0084a186  85c9                 test ecx, ecx
// 0084a188  741d                 je 0x84a1a7
// 0084a18a  8b442408             mov eax, dword ptr [esp + 8]
// 0084a18e  85c0                 test eax, eax
// 0084a190  7415                 je 0x84a1a7
// 0084a192  8b11                 mov edx, dword ptr [ecx]
// 0084a194  50                   push eax
// 0084a195  8b4230               mov eax, dword ptr [edx + 0x30]
// 0084a198  ffd0                 call eax
// 0084a19a  837e0800             cmp dword ptr [esi + 8], 0
// 0084a19e  7507                 jne 0x84a1a7
// 0084a1a0  85c0                 test eax, eax
// 0084a1a2  7403                 je 0x84a1a7
// 0084a1a4  894608               mov dword ptr [esi + 8], eax
// 0084a1a7  5e                   pop esi
// 0084a1a8  c20400               ret 4
// copied from an identical function in another client (function ?Set@CXTPControlSelector@ns_ROCX000018@@QAEXPAX@Z)

namespace ns_ROCX000018 {
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
