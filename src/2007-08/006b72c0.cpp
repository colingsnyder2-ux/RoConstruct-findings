// from server: 97% by colin
struct CXTPControlGallery {
    int method_6b3590();
    void method_6706c0(int);
    void method_6b7220();
    void method_63c050(int);
    int method_6b35a0();
    int method_6b3fc0(int, int);
    void method_6b6f10(int);
    void method_6b72c0(int);
};

void CXTPControlGallery::method_6b72c0(int arg) {
    if (method_6b3590() != 0) {
        method_6706c0(arg);
        return;
    }
    if (arg == 0) {
        *(int*)((char*)this + 0x1d0) = arg;
        method_6b7220();
        method_63c050(arg);
        return;
    }
    if (arg == 2 || arg == 3) {
        if (*(int*)((char*)this + 0x1e8) == 0) {
            if (method_6b35a0() != -1) {
                goto label_733c;
            }
        }
        int v = (arg != 3) ? 1 : 0;
        v = v + v - 1;
        method_6b6f10(method_6b3fc0(v, -1));
    }
label_733c:
    method_63c050(arg);
}
