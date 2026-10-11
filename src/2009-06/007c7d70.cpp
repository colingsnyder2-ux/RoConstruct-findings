// from server: 51% by atomic.potato





struct POINT {
    int x;
    int y;
};

struct RECT {
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" int __stdcall PtInRect(const RECT* r, POINT p);

struct CXTPReportInplaceEdit {
    char pad[0x100];
    int OnHitTest(POINT pt, RECT* rc);
    int OnLButtonDown(POINT pt, RECT* rc);
    int OnLButtonDblClk(POINT pt, RECT* rc);
    int OnMouseMove(POINT pt, RECT* rc);
};

int CXTPReportInplaceEdit::OnHitTest(POINT pt, RECT* rc) {
    RECT r;
    r.left = 0;
    r.top = 0;
    r.right = 0;
    r.bottom = 0;
    if (PtInRect(&r, pt))
        return OnLButtonDown(pt, rc);
    return OnLButtonDblClk(pt, rc);
}
