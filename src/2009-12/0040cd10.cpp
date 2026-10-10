// from server: 57% by atomic.potato
struct CIDEBrowserView
{
    unsigned char pad[0x2ac];
    unsigned char value;
    int __cdecl f(int);
};

int CIDEBrowserView::f(int arg)
{
    return value;
}
