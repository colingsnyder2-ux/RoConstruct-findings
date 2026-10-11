// from server: 55% by colin
struct PAUXTP_COMMANDBARS_CATEGORYINFO;

struct CArray {
    PAUXTP_COMMANDBARS_CATEGORYINFO* m_pData;
    int m_nSize;
    int m_nGrowBy;
    int m_nCount;
    int m_nMaxSize;
    int m_nCapacity;
    int m_nReserved[0x140/4 - 6];
    PAUXTP_COMMANDBARS_CATEGORYINFO** m_pCategoryInfo;
    int m_nCategoryInfoCount;
    int Find(PAUXTP_COMMANDBARS_CATEGORYINFO* pInfo);
};

extern "C" int __stdcall sub_802ff0(PAUXTP_COMMANDBARS_CATEGORYINFO* pInfo, PAUXTP_COMMANDBARS_CATEGORYINFO* pArg);

void __stdcall sub_6a0944();

int CArray::Find(PAUXTP_COMMANDBARS_CATEGORYINFO* pInfo)
{
    int i = 0;
    if (m_nCategoryInfoCount <= 0)
        return 0;
    while (i < m_nCategoryInfoCount)
    {
        if (i < 0 || i >= m_nCategoryInfoCount)
            sub_6a0944();
        PAUXTP_COMMANDBARS_CATEGORYINFO* p = m_pCategoryInfo[i];
        if (sub_802ff0(p, pInfo) == 0)
        {
            if (i >= m_nCategoryInfoCount)
                sub_6a0944();
            return (int)m_pCategoryInfo[i];
        }
        i++;
    }
    return 0;
}
