// from server: 84% by colin
struct S_0077c6e0 {
    void f();
};

extern "C" void __stdcall sub_00725520(int, int);
extern "C" void* __stdcall sub_005f0620();
extern "C" void* __stdcall sub_00407410(void*);
extern "C" void __stdcall sub_00407220(void*);

void S_0077c6e0::f()
{
    *(int*)0x8b3ac4 = 0x7c0864;
    sub_00725520(0x5f0c40, 0x8c77f0);
    void* p = sub_005f0620();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
