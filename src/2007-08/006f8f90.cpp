// from server: 82% by colin
// roc 2007-08 006f8f90  unit: CXTPPropertyGridPaintManager  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f8f90

struct CXTPPropertyGridItem;

struct CXTPPropertyGridPaintManager
{
    char pad[0x20];
    void* m_pGrid;
    void GetItemHeight(CXTPPropertyGridItem* pItem, int* pnHeight);
};

extern "C" void* __stdcall sub_698380(void* pGrid, int, int);
extern "C" void* __stdcall sub_682ac0(void* pGrid, int, int);
extern "C" void* __stdcall sub_64d9b0(void* pItem);
extern "C" int __stdcall sub_653870(void* pMetrics);

void CXTPPropertyGridPaintManager::GetItemHeight(CXTPPropertyGridItem* pItem, int* pnHeight)
{
    void* pRow = sub_698380(*(void**)((char*)this + 0x20), 0, 0);
    if (pRow == 0)
        return;
    int nIndex = *(int*)((char*)pRow + 0x30);
    if (nIndex == -1)
        return;
    void* pItem2 = sub_682ac0(*(void**)((char*)this + 0x20), nIndex, 0);
    void* pMetrics = sub_64d9b0(pItem2);
    if (pMetrics == 0)
        return;
    int nHeight = sub_653870(pMetrics);
    *pnHeight += nHeight + 5;
}
