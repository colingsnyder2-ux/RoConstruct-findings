// from server: 75% by atomic.potato
extern "C" void __stdcall RobloxTreeOperation(
    int, int, int, int, int);

struct CSelectionTreeCtrl
{
    void __stdcall f(int, int, int, int, int);
};

void __stdcall CSelectionTreeCtrl::f(int a, int b, int c, int d, int e)
{
    RobloxTreeOperation(a, b, c, d, e);
}
