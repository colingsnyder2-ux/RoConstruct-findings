// from server: 81% by colin
// roc 2007-08 0076cd50  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076cd50

extern "C" void __cdecl sub_725520(void*, void*);
extern "C" void* __cdecl sub_420040();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void*);

struct CrashReporter {
    void construct();
};

void CrashReporter::construct() {
    void* local;
    sub_725520((void*)0x8bb4dc, (void*)0x4206c0);
    local = sub_420040();
    void* q = sub_407410(&local);
    sub_4339d0();
    *(void**)q = (void*)0x886370;
    sub_630d23((void*)0x777700);
}
