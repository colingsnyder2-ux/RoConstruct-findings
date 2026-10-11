// from server: 46% by atomic.potato
// roc 2009-12 007a9530  unit: RBX::CloneTool  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007a9530

extern "C" void __stdcall sub_98B6F4(const char*);

struct RBX_CloneTool {
    char pad[0x1c];
    int field_1c;
    void* sub_7A9530(void* arg);
};

void* RBX_CloneTool::sub_7A9530(void* arg) {
    if (field_1c != 0) {
        sub_98B6F4("CloneCursor");
    } else {
        sub_98B6F4("CloneOverCursor");
    }
    return arg;
}
