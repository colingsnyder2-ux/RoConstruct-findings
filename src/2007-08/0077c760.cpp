// from server: 84% by colin
struct S_0077c760 {
    void f();
};

extern "C" void __stdcall sub_00725520(void*, void*);
extern "C" void* __stdcall sub_005f0540();
extern "C" void* __stdcall sub_00407410(void*);
extern "C" void __stdcall sub_00407220(void*);

void S_0077c760::f()
{
    *(void**)0x8b3abc = (void*)0x7c0854;
    sub_00725520((void*)0x8c77e8, (void*)0x5f0c20);
    void* p = sub_005f0540();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
