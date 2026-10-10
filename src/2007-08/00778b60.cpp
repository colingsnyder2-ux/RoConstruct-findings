// from server: 78% by tester
struct S {
    void m();
};

extern "C" void __stdcall f_725520(void*, void*);
extern "C" void* __cdecl f_4a5770();
extern "C" void* __stdcall f_407410(void*);
extern "C" void __stdcall f_407220();

void S::m()
{
    f_725520((void*)0x8be95c, (void*)0x4a7140);
    *(int*)0x892a9c = 0x79d834;
    void* p = f_4a5770();
    void* q = f_407410(&p);
    f_407220();
}
