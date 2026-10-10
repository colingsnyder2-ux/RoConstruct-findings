// from server: 31% by colin
struct GWindow {
    void* vtable;
    void method(int, void*);
};

struct String {
    void* data;
    int len;
    int cap;
};

extern "C" void __stdcall sub_5069C0(String* out, const char* src, int len);
extern "C" void __stdcall sub_5053C0(String* s);

void GWindow::method(int a, void* b) {
    String s;
    sub_5069C0(&s, (const char*)b, 8);
    void* vt = vtable;
    void (*fn)(void*, String*) = *(void (**)(void*, String*))((char*)vt + 0x3c);
    fn(this, &s);
    sub_5053C0(&s);
}
