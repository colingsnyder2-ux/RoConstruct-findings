// from server: 93% by colin
struct CXTPStatusBar
{
    char pad[0x128];
    int method(int, int);
};

extern "C" int (__stdcall *helper_77dd6c)(int, int);

int CXTPStatusBar::method(int a, int b)
{
    helper_77dd6c((int)((char*)this + 0x128), b);
    return 0;
}
