// from server: 75% by colin
// roc 2007-08 006d2870  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2870
//
// 006d2870  56                   push esi
// 006d2871  57                   push edi
// 006d2872  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d2876  85ff                 test edi, edi
// 006d2878  8bf1                 mov esi, ecx
// 006d287a  7c1f                 jl 0x6d289b
// 006d287c  8b06                 mov eax, dword ptr [esi]
// 006d287e  8b5058               mov edx, dword ptr [eax + 0x58]
// 006d2881  ffd2                 call edx
// 006d2883  3bf8                 cmp edi, eax
// 006d2885  7d14                 jge 0x6d289b
// 006d2887  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d288b  8b06                 mov eax, dword ptr [esi]
// 006d288d  8b5068               mov edx, dword ptr [eax + 0x68]
// 006d2890  51                   push ecx
// 006d2891  57                   push edi
// 006d2892  8bce                 mov ecx, esi
// 006d2894  ffd2                 call edx
// 006d2896  5f                   pop edi
// 006d2897  5e                   pop esi
// 006d2898  c20800               ret 8
// 006d289b  680b000280           push 0x8002000b
// 006d28a0  e8c3d3f5ff           call 0x62fc68

struct CXTPReportHyperlinkArray
{
    virtual int GetCount();
    virtual void SetAt(int nIndex, int nValue);
};

void CXTPReportHyperlinkArray::SetAt(int nIndex, int nValue)
{
    if (nIndex < 0 || nIndex >= GetCount())
        throw 0x8002000b;
    SetAt(nIndex, nValue);
}
