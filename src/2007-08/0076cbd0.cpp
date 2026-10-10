// from server: 78% by colin
struct CrashReporter {
    void* field0;
};

extern "C" void __cdecl sub_725520(int, int);
extern "C" void* __cdecl sub_41fd40();
extern "C" void* __cdecl sub_407410(void*);
extern "C" void* __cdecl sub_4339d0(void*);
extern "C" void __cdecl sub_630d23(void*, int);

void CrashReporter_ctor() {
    sub_725520(0x8bb4c4, 0x420660);
    void* p = sub_41fd40();
    void* q = sub_407410(&p);
    void* r = sub_4339d0(q);
    *(int*)r = 0x886358;
    sub_630d23(r, 0x777880);
}
