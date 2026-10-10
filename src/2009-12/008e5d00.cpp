// from server: 85% by atomic.potato
extern "C" int __cdecl sub_007f3e30();

struct CXTCaptionButton
{
    void **vtable;
    int f(int);
};

int CXTCaptionButton::f(int)
{
    int result = sub_007f3e30();
    if (result == -1)
    {
        return 0;
    }
    ((void (__fastcall *)(CXTCaptionButton *))vtable[101])(this);
    return 0;
}
