// from server: 70% by colin
struct CXTPTabManagerItem
{
    char pad[0x6c];
    int m_nSomething;
    void* m_pArray;
    int m_nCount;
    void RemoveAll();
};

void CXTPTabManagerItem::RemoveAll()
{
    int i = 0;
    while (i < m_nCount)
    {
        if (i < 0 || i >= m_nCount)
            break;
        void* p = ((void**)m_pArray)[i];
        if (p)
        {
            void** vtbl = *(void***)p;
            ((void (__thiscall*)(void*, int))vtbl[0])(p, 1);
        }
        i++;
    }
    ((void (__thiscall*)(void*, int, int))0x6ffab0)((char*)this + 0x6c, 0, -1);
}
