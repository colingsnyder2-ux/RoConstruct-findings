// from server: 86% by why2
struct CXTPCommandBar__CCommandBarCmdUI {
    void f();
};

void CXTPCommandBar__CCommandBarCmdUI::f() {
    void (__stdcall *fn)(int, int);
    fn = *(void (__stdcall **)(int, int))(*(int *)this + 0x1f4);
    fn(1, 0);
}
