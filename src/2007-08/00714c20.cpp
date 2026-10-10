// from server: 88% by colin
struct CXTCaptionButton {
    int method(int, int, int, int);
    int helper();
};

int CXTCaptionButton::method(int a, int b, int c, int d) {
    int result = ((int (__thiscall *)(CXTCaptionButton *))*(void **)(*(int *)this + 0x164))(this);
    if (result == 0) {
        CXTCaptionButton *obj = (CXTCaptionButton *)this->helper();
        return ((int (__thiscall *)(CXTCaptionButton *))*(void **)(*(int *)obj + 0x28))(obj);
    }
    return result;
}
