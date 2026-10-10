// from server: 67% by colin
struct CXTPHookManagerHookAble {
    int unknown0;
    int* m_pHashTable;
    unsigned int m_nHashTableSize;
    int Remove(void* key);
};

extern "C" int __stdcall sub_68F840(void* node, void* key);
extern "C" void __stdcall sub_6DC2B0(void* node);

int CXTPHookManagerHookAble::Remove(void* key) {
    int* table = m_pHashTable;
    if (table == 0)
        return 0;

    unsigned int index = (unsigned int)key >> 4;
    unsigned int bucket = index % m_nHashTableSize;

    int* node = (int*)table[bucket];
    int** link = (int**)&table[bucket];

    while (node != 0) {
        if (node[3] == (int)index) {
            if (sub_68F840(node, &key) != 0) {
                *link = (int*)node[2];
                sub_6DC2B0(node);
                return 1;
            }
        }
        link = (int**)&node[2];
        node = *link;
    }
    return 0;
}
