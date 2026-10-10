// from server: 43% by colin
struct CXTPDockingPaneTabbedContainer
{
    char pad0[0x3c];
    void* m_pList;          // 0x3c
    char pad1[0x04];
    int m_nSomething;       // 0x44
    char pad2[0x108];
    void* m_pPane;          // 0x14c

    int Func(void* pParam);
};

extern "C" int __stdcall wsprintfA(char* buf, const char* fmt, ...);
extern "C" void __stdcall sub_6D7B90(void* p);
extern "C" void __stdcall sub_685740(void* p, const char* fmt, ...);
extern "C" void __stdcall sub_685720(void* p, const char* fmt, ...);
extern "C" void* __stdcall sub_6353A0(void* p);
extern "C" void __stdcall sub_6E2BD0(void* p, void* q, int r);

int CXTPDockingPaneTabbedContainer::Func(void* pParam)
{
    char buf1[0x100];
    char buf2[0x100];
    int nCount;
    int nSel;
    void* pItem;
    void* pFound;
    int i;

    sub_6D7B90(pParam);

    if (*(int*)((char*)pParam + 0x24) == 0)
    {
        nCount = m_nSomething;
        sub_685740(pParam, (const char*)0x7d8bf4, buf1, nCount);

        if (m_pPane != 0)
            nSel = *(int*)((char*)m_pPane + 0x54);
        else
            nSel = 0;

        sub_685720(pParam, (const char*)0x7b2cd8, &nSel, 0);

        pItem = m_pList;
        i = 1;
        while (pItem != 0)
        {
            void* pNext = *(void**)pItem;
            void* pData = *(void**)((char*)pItem + 8);
            wsprintfA(buf2, (const char*)0x7d8bec, i);
            sub_685740(pParam, buf2, (char*)pData + 0x34);
            i++;
            pItem = pNext;
        }
    }
    else
    {
        sub_685740(pParam, (const char*)0x7d8bf4, buf1);
        sub_685720(pParam, (const char*)0x7b2cd8, &nSel, 0);

        nSel = *(int*)((char*)pParam + 0x20);
        nCount = 0;
        pFound = 0;
        i = 1;
        if (nSel >= 1)
        {
            do
            {
                wsprintfA(buf2, (const char*)0x7d8bec, i);
                sub_685720(pParam, buf2, &nCount, 0);
                void* p = sub_6353A0((void*)nCount);
                void* pv = *(void**)p;
                if (pv != 0 && *(int*)((char*)pv + 0x18) == 0)
                {
                    void* pObj = (char*)pv - 0x20;
                    sub_6E2BD0((char*)this - 0x54, pObj, 1);
                    if (nCount == nSel)
                        pFound = pObj;
                }
                i++;
            } while (i <= nSel);
        }

        if (pFound != 0)
        {
            void* pVtbl = *(void**)((char*)this - 0x54);
            void* pFn = *(void**)((char*)pVtbl + 0x13c);
            ((void (__stdcall*)(void*, void*, int, int))pFn)((char*)this - 0x54, pFound, 1, 1);
        }
    }

    return 1;
}
