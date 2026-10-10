// from server: 82% by colin
struct CScintillaView {
    void sub_45D4A0();
};

extern "C" void* __stdcall func_77dd98(void*, const char*, int, int, int);

extern char g_88a57c;
extern int g_88a584;
extern int g_88a588;
extern int g_88a58c;
extern int g_88a590;

void CScintillaView::sub_45D4A0() {
    int* vtable = *(int**)this;
    void* result = func_77dd98(&g_88a57c, (const char*)g_88a584, g_88a588, g_88a58c, g_88a590);
    int (*fn1)(void*) = *(int (**)(void*))((char*)vtable + 0x1a4);
    if (fn1(result) == 0) {
        int* vt2 = *(int**)this;
        void* result2 = func_77dd98(&g_88a57c, (const char*)g_88a584, g_88a588, g_88a58c, g_88a590);
        int (*fn2)(void*) = *(int (**)(void*))((char*)vt2 + 0x1a0);
        fn2(result2);
    }
}
