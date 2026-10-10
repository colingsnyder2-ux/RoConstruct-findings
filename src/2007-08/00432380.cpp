// from server: 70% by colin
extern "C" {
    int __stdcall GetWindowRect(void*, void*);
    int __stdcall CopyRect(void*, const void*);
    int __stdcall IsRectEmpty(const void*);
}

struct CDataModelPropGrid {
    char pad[0x20];
    void* hwnd;
    char pad2[0xbc];
    bool flag;
    char pad3[0x2f];
    char rect[0x10];
    void sub_4320E0();
    void sub_430800();
    void sub_63002E(int, int, int, int, int, int);
    void SetSomething(bool);
};

void CDataModelPropGrid::SetSomething(bool val)
{
    if (flag == val)
        return;
    flag = val;
    if (val)
    {
        GetWindowRect(hwnd, rect);
        sub_4320E0();
    }
    else
    {
        sub_430800();
        char tmp[0x10];
        CopyRect(tmp, rect);
        if (IsRectEmpty(tmp))
            return;
        int x1 = *(int*)(tmp + 0);
        int y1 = *(int*)(tmp + 4);
        int x2 = *(int*)(tmp + 8);
        int y2 = *(int*)(tmp + 12);
        sub_63002E(0, x1, y1, x2 - x1, y2 - y1, 0x260);
    }
}
