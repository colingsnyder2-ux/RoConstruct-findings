// from server: 80% by colin
struct Seg_00770000 {
    void method();
};

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_58d7c0();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(void*);

void Seg_00770000::method()
{
    sub_725520((void*)0x8c37c0, (void*)0x58dd80);
    void* p = sub_58d7c0();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x8a450c;
    sub_630d23((void*)0x77ae00);
}
