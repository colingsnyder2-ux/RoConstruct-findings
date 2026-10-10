// from server: 34% by atomic.potato
struct CXTColorSelectorCtrl {
    int IsEnabled();
    int value70;
    int value74;
    int reserved;
    int hWnd;
};

extern "C" int __stdcall InvalidateRect(int, const void *, int);

int CXTColorSelectorCtrl::IsEnabled() {
    int enabled = 1;
    if (IsEnabled()) {
        return enabled;
    }
    enabled = -1;
    value70 = enabled;
    value74 = enabled;
    InvalidateRect(hWnd, 0, 0);
    return enabled;
}
