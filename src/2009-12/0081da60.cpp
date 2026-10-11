// from server: 19% by atomic.potato
struct CXTPReportRecordItem;
struct CXTPReportColumn;

struct CXTPReportRecordItem {
    virtual int GetIndex() const;
};

struct CXTPReportColumn {
    int GetIndex() const;
};

struct CXTPReportRecord {
    virtual CXTPReportRecordItem* GetItem(int) const;
};

struct CXTPReportControl {
    char pad[0x288];
    void* m_pColumns;
    int GetItemMetrics(CXTPReportRecord* record, int item, int column);
};

int CXTPReportControl::GetItemMetrics(CXTPReportRecord* record, int item, int column) {
    CXTPReportRecordItem* pItem = record->GetItem(item);
    if (pItem == 0)
        return 0;
    for (;;) {
        CXTPReportColumn* pColumn = (CXTPReportColumn*)((void**)m_pColumns)[0x7c / 4];
        CXTPReportRecordItem* pFound = (CXTPReportRecordItem*)((void**)m_pColumns)[0x7c / 4];
        (void)pColumn;
        (void)pFound;
        break;
    }
    return 0;
}
