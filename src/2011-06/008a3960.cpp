// from server: 54% by atomic.potato




struct CXTPCommandBarList {
    char pad0[0x58];
    int m_arr1[4];
    char pad1[0x6c - 0x58 - 0x10];
    int m_nCount;
    void SetAt(int, int);
    void RemoveAt(int, int);
};

struct CXTPDockBar {
    char pad0[0x58];
    CXTPCommandBarList m_list;
    char pad1[0x6c - 0x58 - 0x14 + 1];
    int m_nSomething;
    void RecalcLayout(int);

    int Insert(int nIndex, int nParam);
};

extern "C" int __stdcall sub_8a29e0(int, int);
extern "C" void __stdcall sub_80a30a();

int CXTPDockBar::Insert(int nIndex, int nParam)
{
    if (nParam == 0)
        return 0;
    int n = sub_8a29e0(nParam, nIndex);
    if (n <= 0)
        return 0;
    m_list.SetAt(n, 1);
    int idx = n - 1;
    if (idx >= 0 && idx < m_list.m_arr1[2])
    {
        if (m_list.m_arr1[1] != 0)
        {
            if (*(int*)(m_list.m_arr1[1] + idx * 4) == 0)
            {
                if (n < m_list.m_arr1[2])
                {
                    if (*(int*)(m_list.m_arr1[1] + n * 4) == 0)
                    {
                        m_list.RemoveAt(n, 1);
                    }
                }
            }
        }
    }
    *(int*)((char*)this + 0x180) = 0;
    m_nSomething = 0;
    sub_80a30a();
    return 1;
}
