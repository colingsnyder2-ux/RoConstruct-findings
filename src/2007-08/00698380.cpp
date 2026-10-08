// from server: 51% by colin
// roc 2007-08 00698380  unit: CXTPPropertyGridItem  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00698380
//
// 00698380  837c240800           cmp dword ptr [esp + 8], 0
// 00698385  7417                 je 0x69839e
// 00698387  837c240400           cmp dword ptr [esp + 4], 0
// 0069838c  7408                 je 0x698396
// 0069838e  e8cdfeffff           call 0x698260
// 00698393  c20800               ret 8
// 00698396  e855ffffff           call 0x6982f0
// 0069839b  c20800               ret 8
// 0069839e  837c240400           cmp dword ptr [esp + 4], 0
// 006983a3  7409                 je 0x6983ae
// 006983a5  8b81c0000000         mov eax, dword ptr [ecx + 0xc0]
// 006983ab  c20800               ret 8
// 006983ae  8b81c4000000         mov eax, dword ptr [ecx + 0xc4]
// 006983b4  c20800               ret 8

struct CXTPPropertyGridItem
{
    char pad[0xc0];
    int m_nValue1;
    int m_nValue2;
    int GetValue(int a, int b);
};

int CXTPPropertyGridItem::GetValue(int a, int b)
{
    if (b == 0)
    {
        if (a != 0)
            return ((int (__thiscall *)(CXTPPropertyGridItem *, int, int))0x698260)(this, a, b);
        else
            return ((int (__thiscall *)(CXTPPropertyGridItem *, int, int))0x6982f0)(this, a, b);
    }
    if (a != 0)
        return m_nValue1;
    return m_nValue2;
}
