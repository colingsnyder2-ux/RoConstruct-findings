// from server: 65% by atomic.potato
struct CXTPReportGroupRow_Batch {
    char pad[0x3c];
    struct {
        int left, top, right, bottom;
    } m_rc;
    int HitTest(int x, int y);
};

extern "C" int __stdcall PtInRect(const void* rc, int x, int y);

int CXTPReportGroupRow_Batch::HitTest(int x, int y) {
    if (PtInRect(&m_rc, x, y)) {
        int (CXTPReportGroupRow_Batch::*fp1)();
        int (CXTPReportGroupRow_Batch::*fp2)(int);
        *(void**)&fp1 = *(void**)((char*)(*(void**)this) + 0x78);
        *(void**)&fp2 = *(void**)((char*)(*(void**)this) + 0x7c);
        int r = (this->*fp1)();
        (this->*fp2)(r == 0 ? 1 : 0);
    }
    return 0;
}
