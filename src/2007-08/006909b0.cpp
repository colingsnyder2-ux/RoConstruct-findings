// from server: 45% by colin
struct CXTSplitterWnd {
    int func_006909b0(int, int, int);
};

extern "C" int __stdcall func_00630652(int, int);
extern "C" int __stdcall func_00630520(int);
extern "C" int __stdcall func_00630202(int);
extern "C" int __stdcall func_007385b0();
extern "C" int __stdcall func_00738ad2(int);
extern "C" int __stdcall func_0062ff4a(int);

int CXTSplitterWnd::func_006909b0(int a, int b, int c)
{
    int v = func_00630652(a, b);
    v = func_00630520(v);
    v = func_00630202(v);
    if (v == c)
        return 0;
    int ebp = func_007385b0();
    func_00738ad2(0);
    func_00738ad2(ebp);
    func_0062ff4a(0);
    func_0062ff4a(5);
    (*(int (__thiscall **)(void *))(*(int *)this + 0x148))(this);
    return v;
}
