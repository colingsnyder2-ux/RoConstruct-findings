// from server: 34% by colin
// roc 2007-08 00702450  unit: CXTPTabPaintManager  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00702450

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl operator_delete(void*);
extern "C" void __cdecl qsort(void*, unsigned int, unsigned int, int (__cdecl*)(const void*, const void*));

struct CXTPTabPaintManager {
    int GetItemCount();
    void LayoutItems(int, int);
};

int __cdecl CompareItems(const void* a, const void* b);

static CXTPTabPaintManager* g_pManager;

int CXTPTabPaintManager::GetItemCount()
{
    return 0;
}

void CXTPTabPaintManager::LayoutItems(int nStart, int nTotal)
{
    int nCount = GetItemCount();
    int nItems = *(int*)((char*)this + 0x5c);
    int nRemaining = nTotal - nStart;

    if (nStart >= nCount)
        return;

    if (nItems == 1)
    {
        if (nItems > 0)
        {
            int* pArr = *(int**)((char*)this + 0x58);
            int* pItem = (int*)pArr[0];
            *(int*)((char*)pItem + 0x20) = nStart;
        }
        else
        {
            *(int*)(0x20) = nStart;
        }
        return;
    }

    int* pIndices = (int*)operator_new(nItems * 4);
    for (int i = 0; i < nItems; i++)
        pIndices[i] = i;

    g_pManager = this;
    qsort(pIndices, nItems, 4, CompareItems);

    nRemaining -= nStart;
    int i = 0;
    while (i < nItems)
    {
        int idx = pIndices[i];
        int* pItem;
        if (idx >= 0 && idx < *(int*)((char*)this + 0x5c))
        {
            int* pArr = *(int**)((char*)this + 0x58);
            pItem = (int*)pArr[idx];
        }
        else
        {
            pItem = 0;
        }
        int nWidth = *(int*)((char*)pItem + 0x20);

        int j = i + 1;
        while (j < nItems)
        {
            int idx2 = pIndices[j];
            int* pItem2;
            if (idx2 >= 0 && idx2 < *(int*)((char*)this + 0x5c))
            {
                int* pArr2 = *(int**)((char*)this + 0x58);
                pItem2 = (int*)pArr2[idx2];
            }
            else
            {
                pItem2 = 0;
            }
            if (*(int*)((char*)pItem2 + 0x20) != nWidth)
                break;
            j++;
        }

        if (j >= nItems)
        {
            int k = 0;
            while (k < nItems)
            {
                int idx3 = pIndices[k];
                int* pItem3;
                if (idx3 >= 0 && idx3 < *(int*)((char*)this + 0x5c))
                {
                    int* pArr3 = *(int**)((char*)this + 0x58);
                    pItem3 = (int*)pArr3[idx3];
                }
                else
                {
                    pItem3 = 0;
                }
                *(int*)((char*)pItem3 + 0x20) = nRemaining / nItems;
                k++;
            }
            break;
        }

        int idx4 = pIndices[i];
        int* pItem4;
        if (idx4 >= 0 && idx4 < *(int*)((char*)this + 0x5c))
        {
            int* pArr4 = *(int**)((char*)this + 0x58);
            pItem4 = (int*)pArr4[idx4];
        }
        else
        {
            pItem4 = 0;
        }
        int nItemWidth = *(int*)((char*)pItem4 + 0x20);

        int nGroupWidth = (nWidth - nItemWidth) * i;
        if (nGroupWidth < nRemaining)
        {
            nRemaining -= nGroupWidth;
            for (int m = 0; m < i; m++)
            {
                int idx5 = pIndices[m];
                int* pItem5;
                if (idx5 >= 0 && idx5 < *(int*)((char*)this + 0x5c))
                {
                    int* pArr5 = *(int**)((char*)this + 0x58);
                    pItem5 = (int*)pArr5[idx5];
                }
                else
                {
                    pItem5 = 0;
                }
                *(int*)((char*)pItem5 + 0x20) = nItemWidth;
            }
            i = 0;
            continue;
        }

        for (int m = 0; m < i; m++)
        {
            int idx6 = pIndices[m];
            int* pItem6;
            if (idx6 >= 0 && idx6 < *(int*)((char*)this + 0x5c))
            {
                int* pArr6 = *(int**)((char*)this + 0x58);
                pItem6 = (int*)pArr6[idx6];
            }
            else
            {
                pItem6 = 0;
            }
            *(int*)((char*)pItem6 + 0x20) -= nRemaining / i;
        }
        break;
    }

    operator_delete(pIndices);
}

int __cdecl CompareItems(const void* a, const void* b)
{
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    int* pArr = *(int**)((char*)g_pManager + 0x58);
    int* pItemA;
    if (ia >= 0 && ia < *(int*)((char*)g_pManager + 0x5c))
        pItemA = (int*)pArr[ia];
    else
        pItemA = 0;
    int* pItemB;
    if (ib >= 0 && ib < *(int*)((char*)g_pManager + 0x5c))
        pItemB = (int*)pArr[ib];
    else
        pItemB = 0;
    return *(int*)((char*)pItemA + 0x20) - *(int*)((char*)pItemB + 0x20);
}
