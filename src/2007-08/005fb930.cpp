// from server: 60% by colin
struct LockTool {
    char pad[0x20];
    void* field_20;
    LockTool* method(void* arg);
};

extern "C" int __stdcall sub_574B80(void*);
extern "C" void* __stdcall sub_77E698(const char*);

LockTool* LockTool::method(void* arg)
{
    void* p = field_20;
    if (p != 0) {
        if (sub_574B80(p)) {
            sub_77E698("LockCursor");
            return this;
        }
    }
    sub_77E698("UnlockCursor");
    return this;
}
