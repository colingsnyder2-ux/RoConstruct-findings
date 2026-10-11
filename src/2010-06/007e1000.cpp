// from server: 34% by atomic.potato
struct CXTPReportRecords {
    int GetCount() const;
    void* GetAt(int index);
    char pad[0x4c];

    void SetIndex(int index);
};

int CXTPReportRecords::GetCount() const {
    if (*(int*)((char*)this + 0x34) != 0)
        return *(int*)((char*)this + 0x38);
    return *(int*)((char*)this + 0x28);
}

void* CXTPReportRecords::GetAt(int index) {
    return 0;
}

void CXTPReportRecords::SetIndex(int index) {
    int i = index;
    while (i < GetCount()) {
        void* p = GetAt(i);
        *(int*)((char*)p + 0x4c) = i;
        i++;
    }
}
