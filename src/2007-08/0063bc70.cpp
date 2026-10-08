// from server: 88% by colin
// roc 2007-08 0063bc70  unit: PAVCXTPControlAction::?$CArray  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063bc70
//
// 0063bc70  56                   push esi
// 0063bc71  8bf1                 mov esi, ecx
// 0063bc73  837e6400             cmp dword ptr [esi + 0x64], 0
// 0063bc77  7e17                 jle 0x63bc90
// 0063bc79  8b4660               mov eax, dword ptr [esi + 0x60]
// 0063bc7c  8b08                 mov ecx, dword ptr [eax]
// 0063bc7e  8b11                 mov edx, dword ptr [ecx]
// 0063bc80  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0063bc86  6a00                 push 0
// 0063bc88  ffd0                 call eax
// 0063bc8a  837e6400             cmp dword ptr [esi + 0x64], 0
// 0063bc8e  7fe9                 jg 0x63bc79
// 0063bc90  5e                   pop esi
// 0063bc91  c3                   ret 

struct CArray {
    char pad[0x60];
    void** m_pData;
    int m_nSize;
    void RemoveAll();
};

void CArray::RemoveAll()
{
    while (m_nSize > 0)
    {
        void* p = m_pData[0];
        (*(void (__thiscall**)(void*, int))(*(int*)p + 0xb8))(p, 0);
    }
}
