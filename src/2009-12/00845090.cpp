// from server: 14% by atomic.potato
struct PopupResult
{
    void **vtable;
};

struct CXTPPopupToolBar
{
    PopupResult *f(int);
};

PopupResult *CXTPPopupToolBar::f(int)
{
    return 0;
}
