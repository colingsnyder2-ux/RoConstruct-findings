// from server: 60% by colin
struct CXTPDockingPaneTabbedContainer;

struct CXTPDockingPaneTabbedContainer
{
    char pad_0000[0x14];
    int field_14;
    char pad_0018[0x08];
    int field_20;
    char pad_0024[0x30];
    int field_54;
    char pad_0058[0x148];
    int field_1a0;

    int func_006e1eb0(int* param);
};

extern "C" int __stdcall sub_006e0540(int);
extern "C" int __stdcall sub_0063020e(int, int);
extern "C" int (__stdcall *g_77ecdc)(int, int, int);

int CXTPDockingPaneTabbedContainer::func_006e1eb0(int* param)
{
    if (param[5] != 0x24f4)
        return 0;

    if (this->field_1a0 != 0)
    {
        int v1 = sub_006e0540(this->field_54);
        int local[4];
        local[0] = param[0];
        local[1] = param[1];
        local[2] = param[2];
        local[3] = param[3];
        sub_0063020e((int)this, (int)local);
        int v2 = local[0];
        int v3 = local[1];
        int v4 = local[2];
        int v5 = local[3];
        param[6] = 1;
        int hwnd = this->field_20;
        g_77ecdc(hwnd, 0, 0);
        int* vtbl = (int*)v1;
        int (*fn)(int, int, int*) = (int (*)(int, int, int*))vtbl[0x140 / 4];
        int out;
        fn(v1, 5, &out);
        param[6] = 0;
        int hwnd2 = this->field_20;
        if (hwnd2 != 0)
            g_77ecdc(hwnd2, 0, 0);
    }

    return 1;
}
