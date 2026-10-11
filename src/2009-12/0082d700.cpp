// from server: 75% by atomic.potato
struct CXTPReportRecords {
    char pad[0x28];
    int m_nCount;
    char pad2[0x8];
    int m_nCount2;
    int GetCount() const;
};

int CXTPReportRecords::GetCount() const {
    if (*(int*)((char*)this + 0x34) != 0)
        return *(int*)((char*)this + 0x38);
    return *(int*)((char*)this + 0x28);
}

struct CXTPReportRows {
    int GetCount() const;
    void ProcessAll(int);
};

void CXTPReportRows::ProcessAll(int arg) {
    int i = 0;
    int count = GetCount();
    if (count > 0) {
        do {
            void* p = (*(void*(**)(void*, int))((*(void***)this)[0x5c/4]))(this, i);
            *(int*)((char*)p + 0x6c) = i;
            if (arg != 0) {
                if ((*(int(**)(void*))((*(void***)p)[0xc0/4]))(p) != 0) {
                    if ((*(int(**)(void*))((*(void***)p)[0xb8/4]))(p) != 0) {
                        void* q = (*(void*(**)(void*))((*(void***)p)[0xb8/4]))(p);
                        (*(void(**)(void*, int))((*(void***)q)[0x88/4]))(q, arg);
                    }
                }
            }
            i++;
            count = GetCount();
        } while (i < count);
    }
}
