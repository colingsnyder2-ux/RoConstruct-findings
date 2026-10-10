// from server: 60% by colin
// roc 2007-08 0044a420  unit: CRobloxModule  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a420

struct CString {
    void* data;
    CString();
    ~CString();
};

struct CReport {
    char pad[0x7c];
    CReport(int, void*);
};

extern "C" int __cdecl sub_4085F0();
extern "C" void* __cdecl sub_409920();
extern "C" void __cdecl sub_40A730(void*);
extern "C" void* __cdecl sub_40AA00(void*, void*, void*);
extern "C" void __cdecl sub_408A70(void*);
extern "C" void __cdecl sub_44CC10(void*, int, void*);
extern "C" void __cdecl sub_62FE2A(void*);
extern "C" void __cdecl sub_401040(void*);
extern "C" void __cdecl sub_630A1E();

extern "C" void* __stdcall sub_77DD98(void*);
extern "C" void __stdcall sub_77DDBC(void*);

extern "C" char str_790870[];
extern "C" char str_790854[];

struct CRobloxModule {
    void report();
};

void CRobloxModule::report()
{
    if (!sub_4085F0())
        return;

    void* p = sub_409920();
    int state = *(int*)((char*)p + 0xec);

    if (state != 1) {
        CString s1;
        sub_40A730(&s1);
        void* a = sub_40AA00(&s1, str_790854, 0);
        void* b = sub_77DD98(a);
        CReport rpt(0x7c, b);
        sub_77DDBC(&s1);
        sub_62FE2A(&rpt);
        sub_401040(&rpt);
    } else if (state == 2) {
        CString s2;
        sub_40A730(&s2);
        void* a = sub_40AA00(&s2, str_790870, 0);
        void* b = sub_77DD98(a);
        sub_408A70(b);
        sub_77DDBC(&s2);
    }
}
