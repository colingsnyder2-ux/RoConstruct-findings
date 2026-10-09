// from server: 77% by colin
// roc 2007-08 006a3ac0  unit: PAUHWND__::?$CArray  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3ac0
//
// 006a3ac0  56                   push esi
// 006a3ac1  8bf1                 mov esi, ecx
// 006a3ac3  33c0                 xor eax, eax
// 006a3ac5  394610               cmp dword ptr [esi + 0x10], eax
// 006a3ac8  7e2f                 jle 0x6a3af9
// 006a3aca  57                   push edi
// 006a3acb  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a3acf  90                   nop 
// 006a3ad0  85c0                 test eax, eax
// 006a3ad2  7c29                 jl 0x6a3afd
// 006a3ad4  3b4610               cmp eax, dword ptr [esi + 0x10]
// 006a3ad7  7d24                 jge 0x6a3afd
// 006a3ad9  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006a3adc  8b1481               mov edx, dword ptr [ecx + eax*4]
// 006a3adf  33c9                 xor ecx, ecx
// 006a3ae1  85ff                 test edi, edi
// 006a3ae3  0f95c1               setne cl
// 006a3ae6  83c001               add eax, 1
// 006a3ae9  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 006a3aed  018a28010000         add dword ptr [edx + 0x128], ecx
// 006a3af3  3b4610               cmp eax, dword ptr [esi + 0x10]
// 006a3af6  7cd8                 jl 0x6a3ad0
// 006a3af8  5f                   pop edi
// 006a3af9  5e                   pop esi
// 006a3afa  c20400               ret 4
// 006a3afd  e81ec4f8ff           call 0x62ff20

struct CArray {
    int m_nGrowBy;
    int m_nSize;
    int m_nMaxSize;
    void** m_pData;
    void AddRefAll(int);
};

void CArray::AddRefAll(int arg) {
    int i = 0;
    if (m_nMaxSize > 0) {
        do {
            if (i < 0 || i >= m_nMaxSize)
                break;
            void* p = m_pData[i];
            int delta = (arg != 0) ? 1 : -1;
            *(int*)((char*)p + 0x128) += delta;
            i++;
        } while (i < m_nMaxSize);
    }
}
