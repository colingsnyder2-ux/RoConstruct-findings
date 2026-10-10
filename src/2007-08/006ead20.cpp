// from server: 1% by colin
struct CXTPDockingPaneExplorerTheme {
    char pad[0x1e0];
    int field_1e0;
    void DrawPane(int, int, int, int, int, int, int, int, int);
    int GetTheme(int);
    int GetPane(int);
    int IsExplorer(int);
    int GetColor(int);
    int GetBorder(int);
    void DrawExplorer(int, int, int, int, int, int, int, int, int);
};

extern "C" {
    int __stdcall GetClientRect(int, int*);
    int __stdcall GetWindowRect(int, int*);
    int __stdcall OffsetRect(int*, int, int);
}

int CXTPDockingPaneExplorerTheme::GetTheme(int a) {
    return 0;
}
