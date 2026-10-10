// from server: 21% by atomic.potato
struct CXTPRibbonBar
{
    void *f();
};

extern "C" void *sub_008982b0(CXTPRibbonBar *);

void *CXTPRibbonBar::f()
{
    void *p = sub_008982b0(this);
    return p;
}
