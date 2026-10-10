// from server: 80% by colin
extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __cdecl sub_41fe40();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(void*);

struct CrashReporter {
    void* field_0;
    void init();
};

void CrashReporter::init()
{
    sub_725520((void*)0x8bb4cc, (void*)0x420680);
    void* p = sub_41fe40();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x886360;
    sub_630d23((void*)0x777800);
}
