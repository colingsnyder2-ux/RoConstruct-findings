// from server: 73% by colin
// roc 2007-08 0067f380  unit: CXTPControlSelector  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f380
//
// 0067f380  56                   push esi
// 0067f381  8bf1                 mov esi, ecx
// 0067f383  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067f386  85c9                 test ecx, ecx
// 0067f388  7417                 je 0x67f3a1
// 0067f38a  8b460c               mov eax, dword ptr [esi + 0xc]
// 0067f38d  83f8ff               cmp eax, -1
// 0067f390  740f                 je 0x67f3a1
// 0067f392  8b11                 mov edx, dword ptr [ecx]
// 0067f394  50                   push eax
// 0067f395  8b4238               mov eax, dword ptr [edx + 0x38]
// 0067f398  ffd0                 call eax
// 0067f39a  c7460cffffffff       mov dword ptr [esi + 0xc], 0xffffffff
// 0067f3a1  5e                   pop esi
// 0067f3a2  c3                   ret 

struct CXTPControlSelector {
    void Release();
    int m_nID;
    void* m_pControl;
    int m_nIndex;
};

void CXTPControlSelector::Release()
{
    if (m_pControl != 0)
    {
        if (m_nIndex != -1)
        {
            void** vtbl = *(void***)m_pControl;
            typedef void (__stdcall *Fn)(void*, int);
            Fn fn = (Fn)vtbl[14];
            fn(m_pControl, m_nIndex);
            m_nIndex = -1;
        }
    }
}
