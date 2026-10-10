// from server: 86% by colin
struct CXTPReportInplaceList {
    void sub_6D1E00();
    void sub_6D2490();
    void method(int a, int b, int c);
};

struct CPoint {
    int x;
    int y;
};

struct CRect {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall PtInRect(const CRect* rect, int x, int y);

extern "C" void __stdcall sub_680000(void* dest, void* src);

void CXTPReportInplaceList::method(int a, int b, int c) {
    CRect r;
    sub_680000(&r, this);
    if (PtInRect(&r, b, c)) {
        sub_6D1E00();
    } else {
        sub_6D2490();
    }
}
