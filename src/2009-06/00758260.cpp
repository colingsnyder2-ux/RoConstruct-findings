// from server: 73% by atomic.potato
struct CXTTreeBase {
    void FreeAssoc(void* p);
    int Compare(void* p);
};

struct CMap {
    char pad0[4];
    void* m_pHashTable;
    unsigned int m_nHashTableSize;
    char padC[4];
    void* m_pFreeList;
    void* m_pBlocks;
    int m_nCount;
    char pad1C[0x30];
    void* m_pNodeHead;
    char pad50[0x48];
    void* m_pNext;

    int Lookup(void* key);
    void FreeAssoc(void* p);
};

extern "C" int __fastcall sub_756A00(void* pAssoc, void* key);
extern "C" void __fastcall sub_7569E0(CMap* pThis, void* pAssoc);

int CMap::Lookup(void* key)
{
    unsigned int nHash;
    void* pAssoc;
    void** ppAssoc;

    if (m_pHashTable == 0)
        return 0;

    nHash = ((unsigned int)key >> 4) % m_nHashTableSize;
    pAssoc = ((void**)m_pHashTable)[nHash];
    ppAssoc = (void**)((char*)m_pHashTable + nHash * 4);

    while (pAssoc != 0)
    {
        if (*(unsigned int*)((char*)pAssoc + 0x4c) == ((unsigned int)key >> 4))
        {
            if (sub_756A00(pAssoc, key) != 0)
            {
                *ppAssoc = *(void**)((char*)pAssoc + 0x48);
                sub_7569E0(this, pAssoc);
                return 1;
            }
        }
        ppAssoc = (void**)((char*)pAssoc + 0x48);
        pAssoc = *ppAssoc;
    }
    return 0;
}
