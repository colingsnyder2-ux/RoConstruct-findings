// from server: 62% by colin
struct CXTPReportControl;

struct CReportDropTarget {
    int HitTest(int x, int y);
};

struct CXTPReportRecords {
    int m_nCount;
    void* m_pData;
};

struct CXTPReportRecord {
    int m_nSomething;
    int m_nIndex;
};

extern "C" int __stdcall sub_6FE860(CXTPReportRecord* record, int x, int y);
extern "C" void __stdcall sub_62FF20();

int CReportDropTarget::HitTest(int x, int y) {
    CXTPReportRecords* records = *(CXTPReportRecords**)((char*)this + 0xb0);
    int i = 0;
    if (records->m_nCount > 0) {
        do {
            if (i < 0 || i >= records->m_nCount) {
                sub_62FF20();
            }
            CXTPReportRecord* record = ((CXTPReportRecord**)records->m_pData)[i];
            if (sub_6FE860(record, x, y) != 0) {
                return *(int*)((char*)record + 0x40);
            }
            records = *(CXTPReportRecords**)((char*)this + 0xb0);
            i++;
        } while (i < records->m_nCount);
    }
    return 0;
}
