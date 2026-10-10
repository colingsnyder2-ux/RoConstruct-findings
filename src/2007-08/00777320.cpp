// from server: 84% by tester
struct CNullDoc {
    void Init();
};

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_408620();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_407220(void*);

void CNullDoc::Init()
{
    *(void**)0x881808 = (void*)0x7854b0;
    sub_725520((void*)0x8baf40, (void*)0x408cb0);
    void* p = sub_408620();
    void* q = sub_407410(&p);
    sub_407220(q);
}
