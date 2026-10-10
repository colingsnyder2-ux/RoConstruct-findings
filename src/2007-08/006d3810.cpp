// from server: 24% by colin
struct CXTPReportColumn {
    void* vtable;
};

struct CXTPReportRecordItem {
    void* vtable;
};

struct CXTPReportGroupRow {
    void* vtable;
};

struct CXTPReportControl {
    void* vtable;
};

struct CXTPReportColumns {
    char pad[0x20];
    CXTPReportControl* pControl;
    CXTPReportControl* pControl2;
    char pad2[0x8];
    int nCount;
    CXTPReportColumn** pColumns;

    void Populate(int param);
    CXTPReportColumn* GetAt(int index);
    void InsertColumn(int index, CXTPReportColumn* pColumn);
    CXTPReportColumn* FindColumn(const char* name);
    void AddGroupColumn(CXTPReportColumn* pColumn);
};

extern "C" void __stdcall sub_6301E4(void* p);
extern "C" void __stdcall sub_630688(int a, int b);
extern "C" void __stdcall sub_653870(void* p);
extern "C" void __stdcall sub_685720(void* a, void* b, void* c, int d);
extern "C" void __stdcall sub_685740(void* a, void* b, void* c);

void CXTPReportColumns::Populate(int param)
{
    CXTPReportColumn* pColumn;
    CXTPReportColumn* pCol;
    CXTPReportGroupRow* pGroup;
    CXTPReportRecordItem* pItem;
    int nCount;
    int nIndex;
    void* pEnum;
    void* pEnum2;
    void* pStr;
    void* pStr2;

    if (*(int*)(param + 0x24) == 0)
    {
        nCount = this->nCount;
        pEnum = ((void* (__thiscall*)(int, int))((*(void***)param)[0x94/4]))(param, 0x7d82c4);
        pEnum2 = pEnum;
        ((void (__thiscall*)(void*, int, int))((*(void***)pEnum)[1]))(pEnum, nCount, 0);
        nIndex = 0;
        if (nCount > 0)
        {
            do
            {
                if (nIndex >= 0 && nIndex < this->nCount)
                {
                    pColumn = this->pColumns[nIndex];
                }
                else
                {
                    pColumn = 0;
                }
                pStr = ((void* (__thiscall*)(void*, void*))((*(void***)pEnum2)[2]))(pEnum2, &pEnum);
                pStr2 = pStr;
                sub_653870(pColumn);
                sub_685740(pStr2, (void*)0x7d82b8, &pStr);
                ((void (__thiscall*)(CXTPReportColumn*, void*))((*(void***)pColumn)[0x58/4]))(pColumn, pStr2);
                if (pStr2)
                {
                    sub_6301E4(pStr2);
                }
                nIndex++;
            } while (nIndex < nCount);
        }
        ((void (__thiscall*)(void*, int))((*(void***)pEnum2)[0]))(pEnum2, 1);
    }
    else
    {
        pEnum = ((void* (__thiscall*)(int, int))((*(void***)param)[0x94/4]))(param, 0x7d82c4);
        pEnum2 = pEnum;
        pItem = (CXTPReportRecordItem*)((void* (__thiscall*)(void*, int, int))((*(void***)pEnum)[1]))(pEnum, 0, 0);
        nIndex = 0;
        if (pItem)
        {
            do
            {
                pStr = ((void* (__thiscall*)(void*, void*))((*(void***)pEnum2)[2]))(pEnum2, &pItem);
                pStr2 = pStr;
                sub_685720(pStr2, (void*)0x7d82b8, &pStr, -1);
                pColumn = this->FindColumn((const char*)pStr);
                if (pColumn)
                {
                    ((void (__thiscall*)(CXTPReportColumn*, void*))((*(void***)pColumn)[0x58/4]))(pColumn, pStr2);
                    pCol = this->GetAt(nIndex);
                    this->InsertColumn(nIndex, pCol);
                    this->AddGroupColumn(pCol);
                    nIndex++;
                }
                if (pStr2)
                {
                    sub_6301E4(pStr2);
                }
                pItem = (CXTPReportRecordItem*)((void* (__thiscall*)(void*, int, int))((*(void***)pEnum2)[1]))(pEnum2, 0, 0);
            } while (pItem);
        }
        ((void (__thiscall*)(void*, int))((*(void***)pEnum2)[0]))(pEnum2, 1);
    }

    pGroup = (CXTPReportGroupRow*)((void* (__thiscall*)(int, int))((*(void***)param)[0x70/4]))(param, 0x7d82ac);
    ((void (__thiscall*)(CXTPReportControl*, void*))((*(void***)this->pControl)[0x58/4]))(this->pControl, pGroup);
    pStr = ((void* (__thiscall*)(int, int))((*(void***)param)[0x70/4]))(param, 0x7d82a0);
    ((void (__thiscall*)(CXTPReportControl*, void*))((*(void***)this->pControl2)[0x58/4]))(this->pControl2, pStr);
    if (pStr)
    {
        sub_6301E4(pStr);
    }
    if (pGroup)
    {
        sub_6301E4(pGroup);
    }
}
