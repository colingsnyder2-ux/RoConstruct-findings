// from server: 100% by atomic.potato
// roc 2008-06 006d7c70  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7c70
//
// 006d7c70  56                   push esi
// 006d7c71  8b742408             mov esi, dword ptr [esp + 8]
// 006d7c75  57                   push edi
// 006d7c76  8bf9                 mov edi, ecx
// 006d7c78  e8d3230000           call 0x6da050
// 006d7c7d  3bf0                 cmp esi, eax
// 006d7c7f  7d17                 jge 0x6d7c98
// 006d7c81  56                   push esi
// 006d7c82  8bcf                 mov ecx, edi
// 006d7c84  e897fcffff           call 0x6d7920
// 006d7c89  89704c               mov dword ptr [eax + 0x4c], esi
// 006d7c8c  8bcf                 mov ecx, edi
// 006d7c8e  46                   inc esi
// 006d7c8f  e8bc230000           call 0x6da050
// 006d7c94  3bf0                 cmp esi, eax
// 006d7c96  7ce9                 jl 0x6d7c81
// 006d7c98  5f                   pop edi
// 006d7c99  5e                   pop esi
// 006d7c9a  c20400               ret 4

struct CXTPReportRecords {
    int GetCount() const;
    void* GetAt(int nIndex);
    void SetIndex(int nIndex);
};

void CXTPReportRecords::SetIndex(int nIndex) {
    int i = nIndex;
    if (i < GetCount()) {
        do {
            void* p = GetAt(i);
            *(int*)((char*)p + 0x4c) = i;
            ++i;
        } while (i < GetCount());
    }
}
