// from server: 41% by atomic.potato
struct CXTPRibbonBar {
    void f(int);
};

struct Inner {
    void g(int);
};

extern "C" void __stdcall sub_8375f0();
extern "C" void __stdcall sub_835ba0();

void CXTPRibbonBar::f(int arg)
{
    char pad[0x264];
    Inner* inner;
    int (*fn)(void);
    fn = *(int (**)(void))(*(int*)this + 0x180);
    if (fn() != 0) {
        sub_8375f0();
    } else {
        sub_835ba0();
    }
}
