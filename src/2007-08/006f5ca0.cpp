// from server: 70% by colin
// roc 2007-08 006f5ca0  unit: CXTPPropertyGridInplaceButton  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5ca0
//
// 006f5ca0  83792c00             cmp dword ptr [ecx + 0x2c], 0
// 006f5ca4  742b                 je 0x6f5cd1
// 006f5ca6  8b442404             mov eax, dword ptr [esp + 4]
// 006f5caa  83f820               cmp eax, 0x20
// 006f5cad  740f                 je 0x6f5cbe
// 006f5caf  83f828               cmp eax, 0x28
// 006f5cb2  740a                 je 0x6f5cbe
// 006f5cb4  83f80d               cmp eax, 0xd
// 006f5cb7  7405                 je 0x6f5cbe
// 006f5cb9  83f873               cmp eax, 0x73
// 006f5cbc  7513                 jne 0x6f5cd1
// 006f5cbe  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 006f5cc1  8b10                 mov edx, dword ptr [eax]
// 006f5cc3  894c2404             mov dword ptr [esp + 4], ecx
// 006f5cc7  8bc8                 mov ecx, eax
// 006f5cc9  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 006f5ccf  ffe0                 jmp eax
// 006f5cd1  c20400               ret 4

struct CXTPPropertyGridInplaceButton
{
    char pad[0x2c];
    void* m_pInplaceEdit;
    int OnKeyDown(unsigned int nChar);
};

int CXTPPropertyGridInplaceButton::OnKeyDown(unsigned int nChar)
{
    if (m_pInplaceEdit != 0)
    {
        if (nChar == 0x20 || nChar == 0x28 || nChar == 0x0d || nChar == 0x73)
        {
            void** vtbl = *(void***)m_pInplaceEdit;
            typedef int (__thiscall *Fn)(void*, unsigned int);
            Fn fn = (Fn)vtbl[0xd0 / 4];
            return fn(m_pInplaceEdit, nChar);
        }
    }
}
