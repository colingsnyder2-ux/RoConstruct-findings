// from server: 82% by colin
struct CXTPDockingPaneAutoHidePanel_CPanelDropTarget
{
    char pad[0x54];
    int field_54;
    char pad2[0x50];
    int field_a8;
    int method_6dae10(int, int);
    int method_6dbb20(int, int);
    int method_6e0550();
    int func(int, int, int, int, int);
};

int CXTPDockingPaneAutoHidePanel_CPanelDropTarget::func(int a, int b, int c, int d, int e)
{
    int v = method_6e0550();
    int* p = *(int**)(v + 0xa0);
    if (*(int*)((char*)p + 0xb0) != 0)
    {
        int r = method_6dae10(d, e);
        if (r != 0)
        {
            int* q = (int*)field_a8;
            if (q == 0 || *(int*)((char*)q + 0xe4) == 0 || *(int*)(*(int*)((char*)q + 0xe4) + 0x1a0) != r)
            {
                method_6dbb20(r, 0);
            }
        }
    }
    return 0;
}
