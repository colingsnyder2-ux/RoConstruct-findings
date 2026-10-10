// from server: 82% by colin
// roc 2007-08 0076c760  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076c760

extern "C" void __stdcall func_00725520(void*, void*);
extern "C" void* __cdecl func_0040cd00();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void __cdecl func_004339d0();
extern "C" void __cdecl func_00630d23(void*);

struct S_func_0076c760 {
    void f();
};

void S_func_0076c760::f()
{
    func_00725520((void*)0x8baf80, (void*)0x40d270);
    void* p = func_0040cd00();
    void* q = func_00407410(&p);
    func_004339d0();
    *(int*)q = 0x8824c0;
    func_00630d23((void*)0x7773a0);
}
