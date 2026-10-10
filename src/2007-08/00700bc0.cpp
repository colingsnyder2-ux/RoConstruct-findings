// from server: 42% by colin
struct CArray {
    int* m_pData;
    int m_nSize;
    int m_nGrowBy;
};

struct CXTPTabManagerAtomItem {
    char pad_0000[0x60];
    void* m_pParent;
    int m_nIndex;
    virtual int vfunc00();
};

struct CXTPTabManagerAtomManager {
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();
    virtual void vfunc14();
    virtual void vfunc18();
    virtual void vfunc1c();
    virtual void vfunc20(void* pItem, void* pRect);
    virtual void vfunc24();
    virtual void vfunc28();
    virtual void vfunc2c();
    virtual void vfunc30();
    virtual void vfunc34(int nIndex, void* pItem);
};

extern "C" int __stdcall IntersectRect(void* pDest, const void* pSrc1, const void* pSrc2);

struct CXTPTabManagerAtom {
    int ProcessRange(int nStart, int nEnd, int nParam, int nFlags);
};

int CXTPTabManagerAtom::ProcessRange(int nStart, int nEnd, int nParam, int nFlags)
{
    CArray* pArray = *(CArray**)((char*)this + 0x84);
    int nResult = 0;
    if (pArray->m_pData == 0)
        return nResult;
    if (nEnd >= pArray->m_nSize)
        return nResult;

    int nFirst = pArray->m_pData[nStart * 2];
    int nLast = pArray->m_pData[nStart * 2 + 1];

    CXTPTabManagerAtomManager* pManager = *(CXTPTabManagerAtomManager**)((char*)this + 0xe0);

    if (*(int*)((char*)pManager + 0x20) != 0)
    {
        if (nFirst > nLast)
            return nResult;
        if (nFirst < 0)
            return nResult;
        if (nFirst >= *(int*)((char*)this + 0x5c))
            return nResult;

        CXTPTabManagerAtomItem* pItem = *(CXTPTabManagerAtomItem**)(*(int*)((char*)this + 0x58) + nFirst * 4);
        if (pItem == 0)
            return nResult;
        if (pItem->m_nIndex != nEnd)
            return nResult;

        if (*(void**)((char*)pItem + 0x60) != pItem)
        {
            if (pItem->vfunc00())
            {
                void* pRect;
                pManager->vfunc20(pItem, &pRect);
                if (IntersectRect(&pRect, &pRect, (void*)nParam))
                {
                    pManager->vfunc34(nEnd, pItem);
                }
            }
        }

        for (int i = nFirst + 1; i <= nLast; i++)
        {
            if (i < 0)
                break;
            if (i >= *(int*)((char*)this + 0x5c))
                break;

            CXTPTabManagerAtomItem* pItem2 = *(CXTPTabManagerAtomItem**)(*(int*)((char*)this + 0x58) + i * 4);
            if (pItem2 == 0)
                break;
            if (pItem2->m_nIndex != nEnd)
                break;

            if (pItem2->vfunc00())
            {
                void* pRect2;
                pManager->vfunc20(pItem2, &pRect2);
                if (IntersectRect(&pRect2, &pRect2, (void*)nParam))
                {
                    pManager->vfunc34(nEnd, pItem2);
                }
            }
        }
    }
    else
    {
        if (nLast < nFirst)
            return nResult;
        if (nLast < 0)
            return nResult;
        if (nLast >= *(int*)((char*)this + 0x5c))
            return nResult;

        CXTPTabManagerAtomItem* pItem = *(CXTPTabManagerAtomItem**)(*(int*)((char*)this + 0x58) + nLast * 4);
        if (pItem == 0)
            return nResult;
        if (pItem->m_nIndex != nEnd)
            return nResult;

        if (pItem->vfunc00())
        {
            void* pRect;
            pManager->vfunc20(pItem, &pRect);
            if (IntersectRect(&pRect, &pRect, (void*)nParam))
            {
                if (*(void**)((char*)pItem + 0x60) == pItem)
                {
                    nResult = (int)pItem;
                }
                else
                {
                    pManager->vfunc34(nEnd, pItem);
                }
            }
        }

        for (int i = nLast - 1; i >= nFirst; i--)
        {
            if (i < 0)
                break;
            if (i >= *(int*)((char*)this + 0x5c))
                break;

            CXTPTabManagerAtomItem* pItem2 = *(CXTPTabManagerAtomItem**)(*(int*)((char*)this + 0x58) + i * 4);
            if (pItem2 == 0)
                break;
            if (pItem2->m_nIndex != nEnd)
                break;

            if (pItem2->vfunc00())
            {
                void* pRect2;
                pManager->vfunc20(pItem2, &pRect2);
                if (IntersectRect(&pRect2, &pRect2, (void*)nParam))
                {
                    pManager->vfunc34(nEnd, pItem2);
                }
            }
        }
    }

    if (nResult != 0)
    {
        pManager->vfunc34(nEnd, (void*)nResult);
    }

    return nResult;
}
