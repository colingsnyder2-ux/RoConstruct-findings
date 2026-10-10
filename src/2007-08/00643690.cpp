// from server: 74% by colin
struct CXTPCommandBar_CCommandBarCmdUI {
    char pad0[0x18];
    int field_18;
    char pad1[0xc];
    void* field_28;
    char pad2[0x4];
    void* field_2c;
    void SetCheck(int);
    void SetRadio(int);
    void OnUpdate(int);
};

void CXTPCommandBar_CCommandBarCmdUI::OnUpdate(int bEnable) {
    void* pBar = field_28;
    field_18 = 1;
    if (*(int*)((char*)pBar + 0x158) != 0) {
        int flag = -(bEnable != 0);
        void* vtbl = *(void**)pBar;
        void (*fn)(void*, int) = *(void (**)(void*, int))((char*)vtbl + 0x68);
        fn(pBar, flag);
        return;
    }
    void* vtbl = *(void**)pBar;
    void (*fn)(void*, int) = *(void (**)(void*, int))((char*)vtbl + 0x68);
    fn(pBar, bEnable);
    if (bEnable == 0 && field_2c == 0 && *(int*)((char*)pBar + 0xa0) != 0) {
        *(int*)((char*)pBar + 0xa0) = 0;
        ((void (*)(void*, int))0x63a690)(pBar, 1);
    }
}
