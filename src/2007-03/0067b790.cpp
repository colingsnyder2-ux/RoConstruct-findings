// roc 2007-03 0067b790  unit: seg_00670000  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0067b790
//
// 0067b790  56                   push esi
// 0067b791  8bf1                 mov esi, ecx
// 0067b793  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067b796  85c9                 test ecx, ecx
// 0067b798  740f                 je 0x67b7a9
// 0067b79a  8b01                 mov eax, dword ptr [ecx]
// 0067b79c  8b10                 mov edx, dword ptr [eax]
// 0067b79e  6a01                 push 1
// 0067b7a0  ffd2                 call edx
// 0067b7a2  c7460400000000       mov dword ptr [esi + 4], 0
// 0067b7a9  8b442408             mov eax, dword ptr [esp + 8]
// 0067b7ad  894604               mov dword ptr [esi + 4], eax
// 0067b7b0  897004               mov dword ptr [eax + 4], esi
// 0067b7b3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0067b7b6  8b01                 mov eax, dword ptr [ecx]
// 0067b7b8  8b5004               mov edx, dword ptr [eax + 4]
// 0067b7bb  ffd2                 call edx
// 0067b7bd  8b7608               mov esi, dword ptr [esi + 8]
// 0067b7c0  85f6                 test esi, esi
// 0067b7c2  7410                 je 0x67b7d4
// 0067b7c4  8b06                 mov eax, dword ptr [esi]
// 0067b7c6  8b5008               mov edx, dword ptr [eax + 8]
// 0067b7c9  8bce                 mov ecx, esi
// 0067b7cb  ffd2                 call edx
// 0067b7cd  8b7614               mov esi, dword ptr [esi + 0x14]
// 0067b7d0  85f6                 test esi, esi
// 0067b7d2  75f0                 jne 0x67b7c4
// 0067b7d4  5e                   pop esi
// 0067b7d5  c20400               ret 4
// copied from an identical function in another client (function ?SetStyle@CXTThemeManagerStyle@ns_ROCX000006@@QAEXPAX@Z)

namespace ns_ROCX000006 {
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
}
