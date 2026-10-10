// from server: 79% by colin
struct S_seg_00770000 {
    void f();
};

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __stdcall sub_58da60();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(void*, void*);

void S_seg_00770000::f()
{
    sub_725520((void*)0x8c37d8, (void*)0x58dde0);
    void* p = sub_58da60();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(void**)q = (void*)0x8a4524;
    sub_630d23((void*)0x77ac80, q);
}
