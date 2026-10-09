// from server: 97% by colin
// roc 2007-08 006d81d0  unit: PAVCXTPDockingPaneBase::?$CMap  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d81d0
//
// 006d81d0  8b442404             mov eax, dword ptr [esp + 4]
// 006d81d4  c1e804               shr eax, 4
// 006d81d7  57                   push edi
// 006d81d8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006d81dc  8907                 mov dword ptr [edi], eax
// 006d81de  33d2                 xor edx, edx
// 006d81e0  f77108               div dword ptr [ecx + 8]
// 006d81e3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d81e7  8910                 mov dword ptr [eax], edx
// 006d81e9  8b4904               mov ecx, dword ptr [ecx + 4]
// 006d81ec  85c9                 test ecx, ecx
// 006d81ee  7506                 jne 0x6d81f6
// 006d81f0  33c0                 xor eax, eax
// 006d81f2  5f                   pop edi
// 006d81f3  c20c00               ret 0xc
// 006d81f6  56                   push esi
// 006d81f7  8b3491               mov esi, dword ptr [ecx + edx*4]
// 006d81fa  85f6                 test esi, esi
// 006d81fc  741f                 je 0x6d821d
// 006d81fe  8bff                 mov edi, edi
// 006d8200  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 006d8203  3b0f                 cmp ecx, dword ptr [edi]
// 006d8205  750f                 jne 0x6d8216
// 006d8207  8d54240c             lea edx, [esp + 0xc]
// 006d820b  52                   push edx
// 006d820c  56                   push esi
// 006d820d  e82e76fbff           call 0x68f840
// 006d8212  85c0                 test eax, eax
// 006d8214  750e                 jne 0x6d8224
// 006d8216  8b7608               mov esi, dword ptr [esi + 8]
// 006d8219  85f6                 test esi, esi
// 006d821b  75e3                 jne 0x6d8200
// 006d821d  5e                   pop esi
// 006d821e  33c0                 xor eax, eax
// 006d8220  5f                   pop edi
// 006d8221  c20c00               ret 0xc
// 006d8224  8bc6                 mov eax, esi
// 006d8226  5e                   pop esi
// 006d8227  5f                   pop edi
// 006d8228  c20c00               ret 0xc

struct S_func_006d81d0 {
    char pad0[4];
    void* m_pHashTable;
    unsigned int m_nHashTableSize;
    int f(unsigned int key, unsigned int* pBucket, void** ppResult);
};

extern "C" int __stdcall sub_0068f840(void* node, unsigned int* pKey);

int S_func_006d81d0::f(unsigned int key, unsigned int* pBucket, void** ppResult)
{
    unsigned int hash = key >> 4;
    *pBucket = hash;
    unsigned int bucket = hash % m_nHashTableSize;
    *reinterpret_cast<unsigned int*>(ppResult) = bucket;
    void** table = reinterpret_cast<void**>(m_pHashTable);
    if (table == 0)
        return 0;
    void* node = table[bucket];
    while (node != 0) {
        if (*reinterpret_cast<unsigned int*>(reinterpret_cast<char*>(node) + 0xc) == *pBucket) {
            unsigned int tmp;
            if (sub_0068f840(node, &tmp) != 0)
                return reinterpret_cast<int>(node);
        }
        node = *reinterpret_cast<void**>(reinterpret_cast<char*>(node) + 8);
    }
    return 0;
}
