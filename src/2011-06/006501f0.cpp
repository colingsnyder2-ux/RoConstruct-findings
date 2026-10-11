// from server: 66% by atomic.potato
struct DropperTool {
    void* field0;
    void sub_6501F0(char* out, const char* arg);
};

extern "C" {
    int __cdecl _snprintf(char*, unsigned int, const char*, ...);
    void* __stdcall sub_A409B8();
    void __stdcall sub_A404C4(void*, void*);
}

void DropperTool::sub_6501F0(char* out, const char* arg) {
    char buf[16];
    *(int*)buf = 0;
    _snprintf(buf, 16, "%s", arg);
    sub_A404C4(this, buf);
}
