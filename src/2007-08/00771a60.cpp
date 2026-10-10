// from server: 80% by colin
struct S_seg_00770000 {
    void f();
};

extern "C" void __stdcall sub_725520(int, int);
extern "C" void* __stdcall sub_55e710();
extern "C" void* __stdcall sub_407410(void*);
extern "C" void __stdcall sub_4339d0();
extern "C" void __stdcall sub_630d23(int);

void S_seg_00770000::f()
{
    sub_725520(0x8c2324, 0x55ed60);
    void* p = sub_55e710();
    void* q = sub_407410(&p);
    sub_4339d0();
    *(int*)q = 0x89f380;
    sub_630d23(0x779d00);
}
