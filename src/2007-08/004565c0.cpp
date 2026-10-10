// from server: 35% by colin
struct RECT {
    long left;
    long top;
    long right;
    long bottom;
};

extern "C" {
    __declspec(dllimport) int __stdcall GetClientRect(void* hWnd, RECT* lpRect);
    __declspec(dllimport) int __stdcall InflateRect(RECT* lprc, int dx, int dy);
}

struct CRobloxView {
    char pad[0xa8];
    void* hWnd;
    char pad2[0x88 - 0xac + 0x100];
    RECT rect;
    void doTeleport();
};

void CRobloxView::doTeleport() {
    RECT rc;
    GetClientRect(this->hWnd, &rc);
    InflateRect(&rc, -0xc, -0xc);
    int w = rc.right - rc.left;
    int h = rc.bottom - rc.top;
    int x = w;
    if (x < 0x1e0) {
        x = 0x1e0;
    }
    int y = h;
    if (y < 0x1e0) {
        y = 0x1e0;
    }
    rc.right = rc.left + x;
    rc.bottom = rc.top + y;
    this->rect = rc;
}
