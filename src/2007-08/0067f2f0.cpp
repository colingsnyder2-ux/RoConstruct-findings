// from server: 100% by colin
// roc 2007-08 0067f2f0  unit: CXTPControlSelector  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f2f0
//
// 0067f2f0  56                   push esi
// 0067f2f1  8bf1                 mov esi, ecx
// 0067f2f3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067f2f6  85c9                 test ecx, ecx
// 0067f2f8  741d                 je 0x67f317
// 0067f2fa  8b442408             mov eax, dword ptr [esp + 8]
// 0067f2fe  85c0                 test eax, eax
// 0067f300  7415                 je 0x67f317
// 0067f302  8b11                 mov edx, dword ptr [ecx]
// 0067f304  50                   push eax
// 0067f305  8b4230               mov eax, dword ptr [edx + 0x30]
// 0067f308  ffd0                 call eax
// 0067f30a  837e0800             cmp dword ptr [esi + 8], 0
// 0067f30e  7507                 jne 0x67f317
// 0067f310  85c0                 test eax, eax
// 0067f312  7403                 je 0x67f317
// 0067f314  894608               mov dword ptr [esi + 8], eax
// 0067f317  5e                   pop esi
// 0067f318  c20400               ret 4

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
