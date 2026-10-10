// from server: 74% by why2
struct CSelectionTreeCtrl {
    char pad[0x12c];
    void* field_12c;
    void* get();
};

extern void sub_00415b60();

void* CSelectionTreeCtrl::get()
{
    void* p = field_12c;
    if (p)
        sub_00415b60();
    return 0;
}
