// roc 2007-03 0066ab30  unit: seg_00660000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0066ab30
//
// 0066ab30  56                   push esi
// 0066ab31  8bf1                 mov esi, ecx
// 0066ab33  8b4e04               mov ecx, dword ptr [esi + 4]
// 0066ab36  85c9                 test ecx, ecx
// 0066ab38  741d                 je 0x66ab57
// 0066ab3a  8b442408             mov eax, dword ptr [esp + 8]
// 0066ab3e  85c0                 test eax, eax
// 0066ab40  7415                 je 0x66ab57
// 0066ab42  8b11                 mov edx, dword ptr [ecx]
// 0066ab44  50                   push eax
// 0066ab45  8b4230               mov eax, dword ptr [edx + 0x30]
// 0066ab48  ffd0                 call eax
// 0066ab4a  837e0800             cmp dword ptr [esi + 8], 0
// 0066ab4e  7507                 jne 0x66ab57
// 0066ab50  85c0                 test eax, eax
// 0066ab52  7403                 je 0x66ab57
// 0066ab54  894608               mov dword ptr [esi + 8], eax
// 0066ab57  5e                   pop esi
// 0066ab58  c20400               ret 4
// copied from an identical function in another client (function ?Set@CXTPControlSelector@ns_ROCX000020@@QAEXPAX@Z)

namespace ns_ROCX000020 {
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
