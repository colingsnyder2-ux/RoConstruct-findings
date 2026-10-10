// from server: 63% by colin
struct CMainFrame {
    void func_00431330(int);
};

extern "C" int __stdcall sub_00586B80(int);
extern "C" int __stdcall sub_005069F0(int);
extern "C" void __stdcall sub_0044B9B0(int, int);

void CMainFrame::func_00431330(int arg)
{
    int* p = (int*)arg;
    int v = p[5];
    if (v != 0) {
        int* q = *(int**)(v + 0xf8);
        int idx = p[2];
        int esi;
        if (idx >= 0 && idx < q[0x2c/4]) {
            esi = *(int*)(q[0x28/4] + idx * 4);
        } else {
            esi = 0;
        }
        int g = *(int*)0x8a2838;
        int tmp1 = g;
        int tmp2 = sub_00586B80(tmp1);
        int tmp3 = sub_005069F0(tmp2);
        char b0 = *((char*)&tmp3 + 0);
        char b1 = *((char*)&tmp3 + 1);
        char b2 = *((char*)&tmp3 + 2);
        int color = (b2 << 16) | (b1 << 8) | b0;
        sub_0044B9B0(esi, color);
    }
    int* vt = *(int**)p;
    int fn = vt[0];
    ((void (__thiscall*)(void*, int))fn)(p, 1);
}
