// from server: 77% by colin
struct CXTPDockingPaneSplitterWnd {
    char pad[0x54];
    int field54;
    char pad2[0x64 - 0x58];
    int field64;
    int sub_6e3660();
    int sub_6e3af0(void*, void*);
    int sub_63023e();
    int Method(int, int, int);
};

extern "C" int __stdcall SetCursor(int);

int CXTPDockingPaneSplitterWnd::Method(int a, int b, int c)
{
    if (field54 != 0) {
        int* p = (int*)sub_6e3660();
        if (p[0xf4 / 4] == 0) {
            int local1;
            int local2;
            if (sub_6e3af0(&local1, &local2) != 0) {
                SetCursor(field64);
                return 1;
            }
        }
    }
    return sub_63023e();
}
