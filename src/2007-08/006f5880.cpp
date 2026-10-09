// from server: 78% by colin
// roc 2007-08 006f5880  unit: CXTPControlCustom  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5880
//
// 006f5880  53                   push ebx
// 006f5881  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006f5885  56                   push esi
// 006f5886  8bf1                 mov esi, ecx
// 006f5888  83be9001000000       cmp dword ptr [esi + 0x190], 0
// 006f588f  7520                 jne 0x6f58b1
// 006f5891  f6c310               test bl, 0x10
// 006f5894  8b06                 mov eax, dword ptr [esi]
// 006f5896  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 006f589c  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 006f58a2  7405                 je 0x6f58a9
// 006f58a4  83c904               or ecx, 4
// 006f58a7  eb03                 jmp 0x6f58ac
// 006f58a9  83e1fb               and ecx, 0xfffffffb
// 006f58ac  51                   push ecx
// 006f58ad  8bce                 mov ecx, esi
// 006f58af  ffd2                 call edx
// 006f58b1  83be9001000002       cmp dword ptr [esi + 0x190], 2
// 006f58b8  7515                 jne 0x6f58cf
// 006f58ba  c1eb04               shr ebx, 4
// 006f58bd  f7d3                 not ebx
// 006f58bf  83e301               and ebx, 1
// 006f58c2  8bce                 mov ecx, esi
// 006f58c4  899e84010000         mov dword ptr [esi + 0x184], ebx
// 006f58ca  e8d1feffff           call 0x6f57a0
// 006f58cf  5e                   pop esi
// 006f58d0  5b                   pop ebx
// 006f58d1  c20400               ret 4

struct CXTPControlCustom {
    void SetStyle(int);
    void OnStyleChanged();
    char pad0[0x184];
    int m_nStyle;
    char pad1[8];
    int m_nState;
    int m_nStyle2;
};

void CXTPControlCustom::SetStyle(int nStyle)
{
    if (m_nState == 0)
    {
        int newStyle = m_nStyle2;
        if (nStyle & 0x10)
            newStyle |= 4;
        else
            newStyle &= ~4;
        ((void (__thiscall *)(CXTPControlCustom *, int))*(void ***)((char *)this + 0x94))(this, newStyle);
    }
    if (m_nState == 2)
    {
        m_nStyle = (~((unsigned)nStyle >> 4)) & 1;
        OnStyleChanged();
    }
}
