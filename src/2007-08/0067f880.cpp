// from server: 87% by colin
extern "C" void* __stdcall GetForegroundWindow();
extern "C" void* __stdcall GetLastActivePopup(void* hWnd);
extern "C" void* __stdcall sub_73887A(void* hWnd);

struct CXTPControlSelector
{
    int IsForeground(void* hWnd);
};

int CXTPControlSelector::IsForeground(void* hWnd)
{
    void* fg = GetForegroundWindow();
    void* wnd = hWnd;
    void* p = sub_73887A(hWnd);
    if (p != 0)
    {
        do
        {
            wnd = p;
            p = sub_73887A(p);
        } while (p != 0);
    }
    void* active = GetLastActivePopup(wnd);
    return fg == active;
}
