// from server: 100% by colin
// roc 2007-08 00691d60  unit: CXTThemeManagerStyle  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691d60
//
// 00691d60  56                   push esi
// 00691d61  8bf1                 mov esi, ecx
// 00691d63  8b4e04               mov ecx, dword ptr [esi + 4]
// 00691d66  85c9                 test ecx, ecx
// 00691d68  740f                 je 0x691d79
// 00691d6a  8b01                 mov eax, dword ptr [ecx]
// 00691d6c  8b10                 mov edx, dword ptr [eax]
// 00691d6e  6a01                 push 1
// 00691d70  ffd2                 call edx
// 00691d72  c7460400000000       mov dword ptr [esi + 4], 0
// 00691d79  8b442408             mov eax, dword ptr [esp + 8]
// 00691d7d  894604               mov dword ptr [esi + 4], eax
// 00691d80  897004               mov dword ptr [eax + 4], esi
// 00691d83  8b4e04               mov ecx, dword ptr [esi + 4]
// 00691d86  8b01                 mov eax, dword ptr [ecx]
// 00691d88  8b5004               mov edx, dword ptr [eax + 4]
// 00691d8b  ffd2                 call edx
// 00691d8d  8b7608               mov esi, dword ptr [esi + 8]
// 00691d90  85f6                 test esi, esi
// 00691d92  7410                 je 0x691da4
// 00691d94  8b06                 mov eax, dword ptr [esi]
// 00691d96  8b5008               mov edx, dword ptr [eax + 8]
// 00691d99  8bce                 mov ecx, esi
// 00691d9b  ffd2                 call edx
// 00691d9d  8b7614               mov esi, dword ptr [esi + 0x14]
// 00691da0  85f6                 test esi, esi
// 00691da2  75f0                 jne 0x691d94
// 00691da4  5e                   pop esi
// 00691da5  c20400               ret 4

struct CXTThemeManagerStyle {
    void* m_unk0;
    void* m_unk4;
    void* m_unk8;
    void SetStyle(void* p);
};

void CXTThemeManagerStyle::SetStyle(void* p)
{
    if (m_unk4) {
        (*(void (__thiscall **)(void*, int))*(void**)m_unk4)(m_unk4, 1);
        m_unk4 = 0;
    }
    m_unk4 = p;
    *(void**)((char*)p + 4) = this;
    (*(void (__thiscall **)(void*))((char*)*(void**)m_unk4 + 4))(m_unk4);
    void* q = m_unk8;
    while (q) {
        (*(void (__thiscall **)(void*))((char*)*(void**)q + 8))(q);
        q = *(void**)((char*)q + 0x14);
    }
}
