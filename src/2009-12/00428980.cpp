// from server: 44% by atomic.potato
struct CWrapperView
{
    unsigned char pad[0x108];
    unsigned char value;
    void __cdecl f(void (*callback)(CWrapperView *, unsigned int));
};

void CWrapperView::f(void (*callback)(CWrapperView *, unsigned int))
{
    callback(this, value);
}
