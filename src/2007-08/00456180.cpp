// from server: 74% by tester
struct CRobloxWnd {
    void m();
    char pad[0x74];
    void* field_74;
    void func_00458540(char arg);
};

void CRobloxWnd::func_00458540(char arg) {
    if (arg == 0) {
        void* p = this->field_74;
        if (p != 0) {
            ((CRobloxWnd*)p)->m();
        }
    }
}

struct CRobloxView {
    char pad[0x88];
    CRobloxWnd wnd;
    void func_00456180(void* arg1, int arg2);
};

extern "C" void __stdcall func_006302a4(CRobloxView* self, void* arg1, int arg2);

void CRobloxView::func_00456180(void* arg1, int arg2) {
    this->wnd.func_00458540(arg1 != 0 ? 1 : 0);
    func_006302a4(this, arg1, arg2);
}
