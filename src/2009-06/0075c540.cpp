// from server: 34% by atomic.potato
struct CArrayInfo
{
    int m_nSize;
    int m_nGrowBy;
    void** m_pData;
};

struct CXTPToolBar
{
    char pad[0xa0];
    void* m_pCommandBars;

    int Find(void* p);
    void Remove(void* p);
    void DoSomething(void* p);

    void Process(CArrayInfo* pArray);
};

struct CInfo
{
    void* m_pVtbl;
    char pad1[4];
    void* m_pSomething;
    char pad2[0x2c];
    void* m_pResult;
};

extern "C" void __cdecl _invalid_parameter_noinfo();

void CXTPToolBar::Remove(void* p)
{
    _invalid_parameter_noinfo();
}

void CXTPToolBar::DoSomething(void* p)
{
    _invalid_parameter_noinfo();
}

int CXTPToolBar::Find(void* p)
{
    _invalid_parameter_noinfo();
    return 0;
}

void CXTPToolBar::Process(CArrayInfo* pArray)
{
    int i = 0;
    if (pArray->m_nSize > 0)
    {
        do
        {
            if (i < 0 || i >= pArray->m_nSize)
            {
                _invalid_parameter_noinfo();
            }
            CInfo* pInfo = (CInfo*)pArray->m_pData[i];
            if (pInfo != 0)
            {
                int found = Find(pInfo->m_pVtbl);
                pInfo->m_pResult = (void*)found;
                if (found != 0)
                {
                    if (pInfo->m_pSomething != 0)
                    {
                        Remove((void*)found);
                    }
                    else
                    {
                        void* pCmdBars = m_pCommandBars;
                        void** vtbl = *(void***)found;
                        void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vtbl[0x20c / 4];
                        fn((void*)found, pCmdBars, 0);
                    }
                    DoSomething(pInfo);
                }
            }
            i++;
        } while (i < pArray->m_nSize);
    }
}
