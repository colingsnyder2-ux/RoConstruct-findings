// from server: 66% by atomic.potato
extern "C" void __stdcall sub_0098DE94(void *, void *);

struct CXTPRibbonTheme
{
    int f(void *);
};

int CXTPRibbonTheme::f(void *arg)
{
    CXTPRibbonTheme *p = this;
    int value = 0;
    sub_0098DE94(arg, (char *)p + 0x34);
    return (int)arg;
}
