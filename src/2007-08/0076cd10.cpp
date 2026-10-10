// from server: 72% by colin
struct CrashReporter {
    void init();
};

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_41ffc0();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*, void*);

void CrashReporter::init() {
    sub_725520((void*)0x8bb4d8, (void*)0x4206b0);
    void* p = sub_41ffc0();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(int*)q = 0x88636c;
    sub_630d23((void*)0x777740, (void*)0x88636c);
}
