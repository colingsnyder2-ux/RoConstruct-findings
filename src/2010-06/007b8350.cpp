// from server: 85% by atomic.potato
extern "C" void __stdcall target(int);

struct CCommandBarCmdUI {
    void f(int value);

    char pad28[0x28];
    void* commandBar;
    int enabled;
};

void CCommandBarCmdUI::f(int value) {
    *(int*)((char*)this + 0x2c) = 1;

    void* bar = *(void**)((char*)this + 0x28);
    if (bar != 0) {
        int* field = (int*)((char*)bar + 0xa0);
        if (*field != value) {
            *field = value;
            target(1);
        }
    }
}
