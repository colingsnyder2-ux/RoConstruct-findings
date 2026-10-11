// from server: 61% by atomic.potato
struct CXTPReportControl;

struct CXTPReportView {
    char pad[0x36c];
    int m_bSomething;
    virtual CXTPReportControl* GetReportCtrl();
    int CheckSomething();
};

struct CXTPReportControl {
    virtual int GetSomething();
};

int CXTPReportView::CheckSomething() {
    if (m_bSomething != 0) {
        CXTPReportControl* p = GetReportCtrl();
        if (p->GetSomething() != 0) {
            return 1;
        }
    }
    return 0;
}
