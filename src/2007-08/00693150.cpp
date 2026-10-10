// from server: 61% by colin
struct CXTPStatusBar {
    void HitTest(int, int, int, int, int, int);
};

struct CXTPStatusBarItem {
    virtual void OnLButtonDown(int, int, int, int, int, int);
};

extern "C" CXTPStatusBarItem* __stdcall FindItem(CXTPStatusBar* self, int index);

void CXTPStatusBar::HitTest(int x, int y, int a, int b, int c, int d)
{
    CXTPStatusBarItem* item = FindItem(this, y);
    if (item)
    {
        item->OnLButtonDown(x, a, b, c, d, 0);
    }
}
