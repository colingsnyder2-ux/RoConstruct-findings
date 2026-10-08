// from server: 62% by colin
// roc 2007-08 006d28c0  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d28c0
//
// 006d28c0  56                   push esi
// 006d28c1  57                   push edi
// 006d28c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d28c6  85ff                 test edi, edi
// 006d28c8  8bf1                 mov esi, ecx
// 006d28ca  7c1f                 jl 0x6d28eb
// 006d28cc  8b06                 mov eax, dword ptr [esi]
// 006d28ce  8b5058               mov edx, dword ptr [eax + 0x58]
// 006d28d1  ffd2                 call edx
// 006d28d3  3bf8                 cmp edi, eax
// 006d28d5  7d14                 jge 0x6d28eb
// 006d28d7  8b06                 mov eax, dword ptr [esi]
// 006d28d9  8b9090000000         mov edx, dword ptr [eax + 0x90]
// 006d28df  6a01                 push 1
// 006d28e1  57                   push edi
// 006d28e2  8bce                 mov ecx, esi
// 006d28e4  ffd2                 call edx
// 006d28e6  5f                   pop edi
// 006d28e7  5e                   pop esi
// 006d28e8  c20400               ret 4
// 006d28eb  680b000280           push 0x8002000b
// 006d28f0  e873d3f5ff           call 0x62fc68

struct CXTPReportHyperlinkArray
{
    virtual int GetCount();
    virtual void SetAt(int nIndex, int nValue);
    void ThrowInvalidIndex();
};

void CXTPReportHyperlinkArray::SetAt(int nIndex, int nValue)
{
    if (nIndex < 0 || nIndex >= GetCount())
        ThrowInvalidIndex();
}
