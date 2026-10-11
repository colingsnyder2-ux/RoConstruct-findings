// from server: 2% by atomic.potato
struct CXTPControls
{
    int GetValue();
    int GetValue2();
};

struct CXTPDockingPane
{
    void GetRect(void* out);
};

struct CXTPDockingPaneContext
{
    char pad0[0xb8];
    int field_b8;
    int field_bc;
    int field_c0;
    int field_c4;
    int field_c8;
    int field_cc;
    char pad_d0[0xc];
    int field_dc;
    char pad_e0[0x3c];
    int field_11c;

    int IsRectEmptyHelper();
    void OffsetRectHelper(int dx, int dy, void* r);
    int HasFlag(int pane, int flag);
    int IsPane(int pane);
    void Reset();
    void DrawRect(int x1, int y1, int x2, int y2, int color);
    void GetPoint(int idx, void* out);
    void OnPaint();
};

extern "C" int __stdcall IsRectEmpty(const void* r);
extern "C" void __stdcall OffsetRect(void* r, int dx, int dy);

int CXTPControls::GetValue()
{
    int value = *(int*)((char*)this + 0xd0);
    if (value != 0)
        return *(int*)(value + 0x24);
    return 0;
}
