// from server: 47% by atomic.potato
struct CIDEBrowserView
{
    int __cdecl f(int *);
};

int CIDEBrowserView::f(int *value)
{
    return *(int *)((char *)this + 0x2ac);
}
