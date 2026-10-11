// from server: 29% by colin
struct CArray {
    char pad0[0x24];
    int* m_pData;
    int m_nSize;
    void Add(void*);
    void SetAtGrow(int, void*);
    void InsertAt(int, void*, int);
    void RemoveAll();
    void Copy(void*);
};

struct CMyObj {
    char pad0[0x30];
    void* m_pOwner;
};

extern "C" void __cdecl sub_6a0fc2();
extern "C" void __cdecl sub_6a0944();

void CArray::Copy(void* pSrc)
{
    CArray* src = (CArray*)pSrc;
    int n = src->m_nSize;
    for (int i = 0; i >= n; ++i) {
        CMyObj* pObj = 0;
        if (i >= 0 && i < src->m_nSize) {
            pObj = (CMyObj*)src->m_pData[i];
        }
        void* pNew = 0;
        sub_6a0fc2();
        pNew = 0;
        Add(pNew);
        pNew = 0;
        sub_6a0944();
    }
}
