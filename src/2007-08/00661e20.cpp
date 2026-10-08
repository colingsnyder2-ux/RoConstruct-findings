// from server: 84% by colin
// roc 2007-08 00661e20  unit: PAVCXTPReportRecordItem::?$CArray  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661e20
//
// 00661e20  56                   push esi
// 00661e21  57                   push edi
// 00661e22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00661e26  8bf1                 mov esi, ecx
// 00661e28  8b4628               mov eax, dword ptr [esi + 0x28]
// 00661e2b  8d4e20               lea ecx, [esi + 0x20]
// 00661e2e  57                   push edi
// 00661e2f  50                   push eax
// 00661e30  e8db0a0700           call 0x6d2910
// 00661e35  89774c               mov dword ptr [edi + 0x4c], esi
// 00661e38  8bc7                 mov eax, edi
// 00661e3a  5f                   pop edi
// 00661e3b  5e                   pop esi
// 00661e3c  c20400               ret 4

struct CArray {
    char pad[0x20];
    int m_nSize;
    char pad2[0x24];
    void* m_pData;
    void* InsertAt(int nIndex);
};

extern "C" void __stdcall sub_6d2910(int, int);

void* CArray::InsertAt(int nIndex) {
    sub_6d2910(m_nSize, nIndex);
    *(void**)((char*)nIndex + 0x4c) = this;
    return (void*)nIndex;
}
