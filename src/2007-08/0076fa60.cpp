// from server: 81% by colin
extern "C" void __cdecl func_00725520(int, int);
extern "C" int __cdecl func_004a5af0();
extern "C" void* __cdecl func_00407410(void*);
extern "C" void __cdecl func_004339d0();
extern "C" void __cdecl func_00630d23(void*);

void func_0076fa60()
{
    int local;
    void* p;

    func_00725520(0x8be978, 0x4a71b0);
    local = func_004a5af0();
    p = func_00407410(&local);
    func_004339d0();
    *(void**)p = (void*)0x892ab8;
    func_00630d23((void*)0x7789a0);
}
