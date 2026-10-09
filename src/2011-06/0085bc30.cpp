// roc 2011-06 0085bc30  unit: CXTPControlSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0085bc30
//
// 0085bc30  56                   push esi
// 0085bc31  8bf1                 mov esi, ecx
// 0085bc33  8b4e04               mov ecx, dword ptr [esi + 4]
// 0085bc36  85c9                 test ecx, ecx
// 0085bc38  741d                 je 0x85bc57
// 0085bc3a  8b442408             mov eax, dword ptr [esp + 8]
// 0085bc3e  85c0                 test eax, eax
// 0085bc40  7415                 je 0x85bc57
// 0085bc42  8b11                 mov edx, dword ptr [ecx]
// 0085bc44  50                   push eax
// 0085bc45  8b4230               mov eax, dword ptr [edx + 0x30]
// 0085bc48  ffd0                 call eax
// 0085bc4a  837e0800             cmp dword ptr [esi + 8], 0
// 0085bc4e  7507                 jne 0x85bc57
// 0085bc50  85c0                 test eax, eax
// 0085bc52  7403                 je 0x85bc57
// 0085bc54  894608               mov dword ptr [esi + 8], eax
// 0085bc57  5e                   pop esi
// 0085bc58  c20400               ret 4
// copied from an identical function in another client (function ?Set@CXTPControlSelector@ns_ROCX000001@@QAEXPAX@Z)

namespace ns_ROCX000001 {
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
