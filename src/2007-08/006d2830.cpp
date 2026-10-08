// from server: 26% by colin
// roc 2007-08 006d2830  unit: PAVCXTPReportHyperlink::?$CXTPArrayT  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d2830
//
// 006d2830  56                   push esi
// 006d2831  57                   push edi
// 006d2832  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d2836  85ff                 test edi, edi
// 006d2838  8bf1                 mov esi, ecx
// 006d283a  7c1a                 jl 0x6d2856
// 006d283c  8b06                 mov eax, dword ptr [esi]
// 006d283e  8b5058               mov edx, dword ptr [eax + 0x58]
// 006d2841  ffd2                 call edx
// 006d2843  3bf8                 cmp edi, eax
// 006d2845  7d0f                 jge 0x6d2856
// 006d2847  8b06                 mov eax, dword ptr [esi]
// 006d2849  8b5064               mov edx, dword ptr [eax + 0x64]
// 006d284c  57                   push edi
// 006d284d  8bce                 mov ecx, esi
// 006d284f  ffd2                 call edx
// 006d2851  5f                   pop edi
// 006d2852  5e                   pop esi
// 006d2853  c20400               ret 4
// 006d2856  680b000280           push 0x8002000b
// 006d285b  e808d4f5ff           call 0x62fc68

extern "C" void __stdcall sub_62FC68(unsigned int code);

struct CXTPReportHyperlinkArray
{
    int GetCount();
    void* GetAt(int index);
    void ThrowInvalidIndex();
};

int CXTPReportHyperlinkArray::GetCount()
{
    return 0;
}

void* CXTPReportHyperlinkArray::GetAt(int index)
{
    return 0;
}

void CXTPReportHyperlinkArray::ThrowInvalidIndex()
{
    sub_62FC68(0x8002000b);
}

void* CXTPReportHyperlinkArray_GetAt(CXTPReportHyperlinkArray* self, int index)
{
    if (index >= 0 || index >= self->GetCount())
        self->ThrowInvalidIndex();
    return self->GetAt(index);
}
