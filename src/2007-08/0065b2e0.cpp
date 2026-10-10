// from server: 45% by colin
extern "C" void* __stdcall HeapAlloc(void* hHeap, unsigned long dwFlags, unsigned long dwBytes);
extern "C" long __stdcall InterlockedIncrement(long volatile* Addend);

struct CXTPBatchAllocManagerT
{
    int m_nCount;
    void* m_pFreeList;
    void* m_pAllocList;
    void* m_pLast;
};

extern CXTPBatchAllocManagerT* g_pBatchAllocManager;
extern int g_nBatchSize;
extern void* g_hHeap;
extern int g_bHeapInitialized;
extern int g_nAllocCount;
extern CXTPBatchAllocManagerT* g_pBatchAllocManager2;

void* __stdcall sub_62ff32(unsigned long size);
void sub_656a50();

void* __stdcall AllocBatch()
{
    CXTPBatchAllocManagerT* pManager = g_pBatchAllocManager;
    if (pManager == 0)
    {
        int nCount = g_nBatchSize;
        int nSize = ((nCount + 8) & ~3) * 4;
        unsigned long dwBytes = nSize + 16;
        void* pMem;
        if (g_bHeapInitialized != 0)
        {
            sub_656a50();
            pMem = HeapAlloc(g_hHeap, 0, dwBytes);
        }
        else
        {
            pMem = sub_62ff32(dwBytes);
        }
        if (pMem == 0)
            return 0;
        CXTPBatchAllocManagerT* pNew = (CXTPBatchAllocManagerT*)pMem;
        pNew->m_nCount = 0;
        pNew->m_pFreeList = 0;
        pNew->m_pAllocList = 0;
        pNew->m_pLast = 0;
        g_pBatchAllocManager = pNew;
        char* pData = (char*)pMem + 16;
        pNew->m_pFreeList = pData;
        int i = 0;
        if (g_nBatchSize > 0)
        {
            char* pCur = pData;
            do
            {
                pCur += nSize;
                *(CXTPBatchAllocManagerT**)pData = pNew;
                *(char**)(pData + 4) = pCur;
                pData = pCur;
                i++;
            } while (i < g_nBatchSize);
        }
        *(void**)(pData + 4) = 0;
        pManager = g_pBatchAllocManager;
        if (pManager == 0)
            return 0;
    }
    if (pManager->m_pFreeList == 0)
        return 0;
    void* pResult = pManager->m_pFreeList;
    pManager->m_nCount++;
    InterlockedIncrement((long volatile*)&g_nAllocCount);
    pManager = g_pBatchAllocManager;
    void* pNext = pManager->m_pFreeList;
    void* pNextNext = *(void**)((char*)pNext + 4);
    *(void**)((char*)pNext + 4) = 0;
    pManager = g_pBatchAllocManager;
    pManager->m_pFreeList = pNextNext;
    pResult = (char*)pResult + 8;
    if (pNextNext != 0)
        return pResult;
    CXTPBatchAllocManagerT* pMgr = g_pBatchAllocManager;
    CXTPBatchAllocManagerT* pNode = pMgr;
    void* pList = pMgr->m_pAllocList;
    void** ppLink = &pMgr->m_pAllocList;
    if (pList != 0)
    {
        pList = *ppLink;
    }
    else
    {
        pList = pMgr->m_pLast;
    }
    g_pBatchAllocManager = (CXTPBatchAllocManagerT*)pList;
    if (pList != 0)
    {
        *(void**)((char*)pList + 8) = *ppLink;
    }
    pNode->m_pLast = g_pBatchAllocManager2;
    void* pPrev = g_pBatchAllocManager2;
    if (pPrev != 0)
    {
        pPrev = *(void**)((char*)pPrev + 8);
    }
    else
    {
        pPrev = 0;
    }
    *ppLink = pPrev;
    CXTPBatchAllocManagerT* pMgr2 = g_pBatchAllocManager2;
    if (pMgr2 != 0)
    {
        pMgr2->m_pAllocList = pNode;
    }
    g_pBatchAllocManager2 = pNode;
    return pResult;
}
