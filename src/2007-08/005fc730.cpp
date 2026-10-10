// from server: 40% by colin
struct ResizeTool {
    char pad[0x2c];
    bool overHandle;

    void findTargetPV(void* arg);
};

extern "C" {
    void __stdcall string_ctor_pbd(void* self, const char* s);
    void __stdcall string_ctor_copy(void* self, const void* other);
    void __stdcall string_dtor(void* self);
    void __stdcall string_assign(void* self, const void* other);
}

void ResizeTool::findTargetPV(void* arg) {
    char buf[0x1c];
    int state = 0;
    if (overHandle) {
        string_ctor_pbd(buf, "ResizeCursor");
        state = 1;
    } else {
        string_ctor_copy(buf, (char*)this + 0x2c);
        state = 2;
    }
    string_assign((char*)this + 0x2c, buf);
    state |= 4;
    if (state & 2) {
        state &= ~2;
        string_dtor(buf);
    }
    if (state & 1) {
        state &= ~1;
        string_dtor(buf);
    }
}
