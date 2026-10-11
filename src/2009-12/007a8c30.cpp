// from server: 97% by atomic.potato
struct ResizeTool {
    char pad0[0x24];
    void* field24;
    char pad28[0x4];
    unsigned char field28;
    void onMouseDown(int);
    void method7a8550(int);
};

void ResizeTool::onMouseDown(int a) {
    method7a8550(a);
    void* p = field24;
    void* q;
    if (p != 0) {
        q = *(void**)((char*)p + 4);
    } else {
        q = 0;
    }
    field28 = (q != 0);
    method7a8550(a);
}
