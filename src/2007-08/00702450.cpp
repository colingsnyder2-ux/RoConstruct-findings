// from server: 49% by tester
// roc 2007-08 00702450  unit: CXTPTabPaintManager  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00702450

extern "C" void __cdecl free(void*);
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl qsort(void*, unsigned int, unsigned int, int (__cdecl*)(const void*, const void*));

struct CXTPTabPaintManager {
    int sub_6fe5d0();
    void Sort(int, int);
};

int __cdecl compare_702400(const void* a, const void* b);

int CXTPTabPaintManager::sub_6fe5d0()
{
    return 0;
}

void CXTPTabPaintManager::Sort(int nStart, int nEnd)
{
    int nCount = *(int*)((char*)this + 0x5c);
    int nFirst = sub_6fe5d0();
    int nDiff = nEnd - nStart;

    if (nStart >= nFirst)
        return;

    if (nCount == 1) {
        if (nCount > 0) {
            int* p = *(int**)((char*)this + 0x58);
            int* pItem = *(int**)p;
            pItem[8] = nStart;
        }
        return;
    }

    int* pIndices = (int*)malloc(nCount * 4);
    for (int i = 0; i < nCount; i++)
        pIndices[i] = i;

    *(void**)0x8c974c = this;
    qsort(pIndices, nCount, 4, compare_702400);

    nDiff -= nStart;
    int nRemaining = nDiff;

    for (int i = 0; i < nCount; i++) {
        int idx = pIndices[i];
        int* pItem;
        if (idx >= 0 && idx < *(int*)((char*)this + 0x5c))
            pItem = *(int**)(*(int*)((char*)this + 0x58) + idx * 4);
        else
            pItem = 0;
        int nVal = pItem[8];

        int j = i + 1;
        while (j < nCount) {
            int idx2 = pIndices[j];
            int* pItem2;
            if (idx2 >= 0 && idx2 < *(int*)((char*)this + 0x5c))
                pItem2 = *(int**)(*(int*)((char*)this + 0x58) + idx2 * 4);
            else
                pItem2 = 0;
            if (pItem2[8] != nVal)
                break;
            j++;
        }

        if (j >= nCount) {
            int nEach = nRemaining / nCount;
            for (int k = 0; k < nCount; k++) {
                int idx3 = pIndices[k];
                int* pItem3;
                if (idx3 >= 0 && idx3 < *(int*)((char*)this + 0x5c))
                    pItem3 = *(int**)(*(int*)((char*)this + 0x58) + idx3 * 4);
                else
                    pItem3 = 0;
                pItem3[8] = nEach;
            }
            free(pIndices);
            return;
        }

        int idx3 = pIndices[j];
        int* pItem3;
        if (idx3 >= 0 && idx3 < *(int*)((char*)this + 0x5c))
            pItem3 = *(int**)(*(int*)((char*)this + 0x58) + idx3 * 4);
        else
            pItem3 = 0;
        int nNextVal = pItem3[8];

        int nSpan = (nNextVal - nVal) * j;
        if (nSpan < nRemaining) {
            nRemaining -= nSpan;
            for (int k = 0; k < j; k++) {
                int idx4 = pIndices[k];
                int* pItem4;
                if (idx4 >= 0 && idx4 < *(int*)((char*)this + 0x5c))
                    pItem4 = *(int**)(*(int*)((char*)this + 0x58) + idx4 * 4);
                else
                    pItem4 = 0;
                pItem4[8] = nNextVal;
            }
            i = j - 1;
        } else {
            int nEach = nRemaining / j;
            for (int k = 0; k < j; k++) {
                int idx5 = pIndices[k];
                int* pItem5;
                if (idx5 >= 0 && idx5 < *(int*)((char*)this + 0x5c))
                    pItem5 = *(int**)(*(int*)((char*)this + 0x58) + idx5 * 4);
                else
                    pItem5 = 0;
                pItem5[8] -= nEach;
            }
            free(pIndices);
            return;
        }
    }

    free(pIndices);
}

int __cdecl compare_702400(const void* a, const void* b)
{
    int ia = *(const int*)a;
    int ib = *(const int*)b;
    CXTPTabPaintManager* pThis = *(CXTPTabPaintManager**)0x8c974c;
    int* pItemA;
    if (ia >= 0 && ia < *(int*)((char*)pThis + 0x5c))
        pItemA = *(int**)(*(int*)((char*)pThis + 0x58) + ia * 4);
    else
        pItemA = 0;
    int* pItemB;
    if (ib >= 0 && ib < *(int*)((char*)pThis + 0x5c))
        pItemB = *(int**)(*(int*)((char*)pThis + 0x58) + ib * 4);
    else
        pItemB = 0;
    return pItemA[8] - pItemB[8];
}
