// from server: 53% by colin
struct CXTSplitterWnd
{
    int func_00690910(int, int, int);
};

extern "C" int __stdcall sub_00630652(int, int);
extern "C" int __stdcall sub_00630520(int);
extern "C" int __stdcall sub_00630202(int);
extern "C" int __stdcall sub_007385b0();
extern "C" int __stdcall sub_0062ff4a(int);
extern "C" int __stdcall sub_00738ad2(int);

int CXTSplitterWnd::func_00690910(int a, int b, int c)
{
    int v = sub_00630652(b, a);
    v = sub_00630520(v);
    v = sub_00630202(v);
    if (v == c)
        return 0;

    int e1 = sub_007385b0();
    int e2 = sub_007385b0();

    sub_0062ff4a(0);
    sub_0062ff4a(0);
    sub_00738ad2(e2);
    sub_00738ad2(e1);
    sub_0062ff4a(5);
    sub_0062ff4a(5);

    (*(int (__thiscall **)(void *))(*(int *)this + 0x148))(this);
    return 1;
}
