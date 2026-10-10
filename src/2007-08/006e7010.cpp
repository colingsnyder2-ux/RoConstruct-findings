// from server: 28% by colin
struct XTPDockingPanePaintThemes_CXTPDockingPaneOffice2003Theme
{
    char pad_0000[0x1e0];
    int field_01e0;
    char pad_01e4[0x1c];
    int field_0200;
    int field_0204;
    char pad_0208[0x4];
    int field_020c;
    int field_0210;
    void func_006e7010(int, int, int, int, int, int, int, int);
};

struct CPoint
{
    int x;
    int y;
};

struct CRect
{
    int left;
    int top;
    int right;
    int bottom;
};

extern "C" void* __stdcall sub_006e54b0(int);
extern "C" void __stdcall sub_00682240(void*, int, int, void*, void*);
extern "C" void __stdcall sub_00682560(void*, void*);
extern "C" void __stdcall sub_006308b0(void*, void*, int);
extern "C" void __stdcall sub_006805f0(void*, void*, int);
extern "C" void __stdcall sub_0063097c(void*, void*, int, int);
extern "C" void __stdcall sub_00630976(void*, int, int);
extern "C" void __stdcall sub_00680680(void*);

void XTPDockingPanePaintThemes_CXTPDockingPaneOffice2003Theme::func_006e7010(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
    int* pThis = (int*)this;
    if (pThis[0x1e0 / 4] != 0)
    {
        void* p;
        if (a1 != 0)
            p = (char*)this + 0x204;
        else
            p = (char*)this + 0x1e4;
        void* tmp;
        sub_00682240((void*)a2, 1, 0, p, &tmp);
        sub_00682560(tmp, 0);
    }
    else if (a1 != 0)
    {
        int v;
        if (pThis[0x210 / 4] == -1)
            v = pThis[0x20c / 4];
        else
            v = pThis[0x210 / 4];
        sub_006308b0((void*)a2, &v, v);
    }
    else
    {
        int v1 = 0;
        if (a2 != 0)
            v1 = *(int*)(a2 + 4);
        void* mem = sub_006e54b0(0x34);
        sub_006805f0(&v1, mem, v1);
        CPoint pt;
        CRect rc;
        pt.x = 0;
        pt.y = 0;
        sub_0063097c((void*)a2, &pt, rc.left + 1, rc.top);
        sub_00630976((void*)a2, rc.left, rc.top - 1);
        sub_0063097c((void*)a2, &pt, rc.left + 1, rc.top);
        sub_00630976((void*)a2, rc.left, rc.top - 1);
        sub_0063097c((void*)a2, &pt, rc.left - 1, rc.top + 1);
        sub_00630976((void*)a2, rc.left - 1, rc.top - 1);
        sub_0063097c((void*)a2, &pt, rc.left + 1, rc.top - 1);
        sub_00630976((void*)a2, rc.left - 1, rc.top - 1);
        sub_00680680(&pt);
    }
    int n = (a1 != 0) ? 0x12 : 0x0a;
    sub_006e54b0(n);
}
