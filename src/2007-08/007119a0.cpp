// from server: 73% by colin
struct CXTColorSelectorCtrl {
    char pad0[0x20];
    void* m_hwnd;
    char pad1[0x8c];
    int m_x;
    int m_y;
    char pad2[0x90];
    void* m_list;
    char IsVisible();
    void SetState(void*);
    void Invalidate();
    int HitTest(int, int, int);
};

extern "C" int __stdcall PtInRect(const void*, int, int);
extern "C" int __stdcall TrackMouseEvent(void*);

int CXTColorSelectorCtrl::HitTest(int x, int y, int z)
{
    if (IsVisible())
        return 0;

    if (m_x == x && m_y == y) {
        Invalidate();
        return 0;
    }

    m_x = x;
    m_y = y;

    void* node = m_list;
    while (node != 0) {
        void* item = *(void**)((char*)node + 8);
        if (item != 0) {
            int r[4];
            r[0] = *(int*)((char*)item + 0xc);
            r[1] = *(int*)((char*)item + 0x10);
            r[2] = *(int*)((char*)item + 0x14);
            r[3] = *(int*)((char*)item + 0x18);
            if (PtInRect(r, x, y) != 0) {
                SetState(item);
                struct { int cbSize; int dwFlags; void* hwndTrack; int dwHoverTime; } tme;
                tme.cbSize = 0x10;
                tme.dwFlags = 2;
                tme.hwndTrack = m_hwnd;
                tme.dwHoverTime = 0;
                TrackMouseEvent(&tme);
                return 0;
            }
        }
        node = *(void**)node;
    }

    SetState(0);
    Invalidate();
    return 0;
}
