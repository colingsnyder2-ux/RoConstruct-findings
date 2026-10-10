// from server: 56% by colin
struct VCXTPReportRows {
    int CompareRows(void* p1, void* p2);
};

struct CXTPReportRow {
    virtual int Compare(CXTPReportRow* pRow);
};

struct CXTPReportRows {
    int m_nCount;
    void* m_pRows;
};

struct CXTPReportRowArray {
    int GetCount();
    CXTPReportRow* GetAt(int nIndex);
};

extern "C" int __stdcall sub_47B540(void*);
extern "C" void* __stdcall sub_6D3600(void*, int);
extern "C" void* __stdcall sub_661D00(void*, void*);
extern "C" int __stdcall sub_692220(void*);
extern "C" int __stdcall sub_65E560(void*);

int VCXTPReportRows::CompareRows(void* p1, void* p2)
{
    void** pp1 = (void**)p1;
    void** pp2 = (void**)p2;
    void* v1 = *pp1;
    void* v2 = *pp2;

    void** vt1 = *(void***)v1;
    void** vt2 = *(void***)v2;

    void* row1 = ((void* (__thiscall*)(void*))vt1[0x18])(v1);
    void* row2 = ((void* (__thiscall*)(void*))vt2[0x18])(v2);

    if (row1 == row2)
        return 0;
    if (row1 == 0)
        return 0;
    if (row2 == 0)
        return 0;

    CXTPReportRows* pRows = (CXTPReportRows*)((char*)v1 + 0x24);

    int nCount = sub_47B540(*(void**)((char*)pRows + 0x20));
    for (int i = 0; i < nCount; i++) {
        void* pItem = sub_6D3600(*(void**)((char*)pRows + 0x20), i);
        if (*(int*)((char*)pItem + 0x48) != 0) {
            int flag = *(int*)((char*)pItem + 0x3C);
            void* a = sub_661D00(row1, pItem);
            void* b = sub_661D00(row2, pItem);
            if (a != 0 && b != 0) {
                void** vt = *(void***)a;
                int r = ((int (__thiscall*)(void*, void*, void*))vt[0x1F])(a, pItem, b);
                if (r != 0) {
                    return (flag != 0) ? -r : r;
                }
            }
        }
    }

    nCount = sub_47B540(*(void**)((char*)pRows + 0x24));
    for (int i = 0; i < nCount; i++) {
        void* pItem = sub_6D3600(*(void**)((char*)pRows + 0x24), i);
        int flag = sub_65E560(pItem);
        void* a = sub_661D00(row1, pItem);
        void* b = sub_661D00(row2, pItem);
        if (a != 0 && b != 0) {
            void** vt = *(void***)a;
            int r = ((int (__thiscall*)(void*, void*, void*))vt[0x20])(a, pItem, b);
            if (r != 0) {
                return (flag != 0) ? -r : r;
            }
        }
    }

    int c1 = sub_692220(row1);
    int c2 = sub_692220(row2);
    return (c2 > c1) ? 1 : -1;
}
