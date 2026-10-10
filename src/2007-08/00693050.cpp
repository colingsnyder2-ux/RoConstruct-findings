// from server: 31% by colin
struct CStatusCmdUI
{
    int f(int);
};

struct CStatusBar
{
    void DoUpdate(int, int, int);
};

extern "C" void __stdcall sub_77DDB8(int);
extern "C" void __stdcall sub_77DDBC(int);

int CStatusCmdUI::f(int a)
{
    int local = 0;
    sub_77DDB8(a);
    ((CStatusBar*)0)->DoUpdate(0, 0, 0);
    sub_77DDBC(0);
    return 0;
}
