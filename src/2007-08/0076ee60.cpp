// from server: 78% by colin
// roc 2007-08 0076ee60  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ee60

extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_00487070();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void* __cdecl sub_004339d0();
extern "C" void __cdecl sub_00630d23(void*, void*);

void sub_0076ee60()
{
    void* p;
    sub_00725520((void*)0x8bdcb0, (void*)0x487980);
    p = sub_00487070();
    void* q = sub_00407410(&p);
    void* r = sub_004339d0();
    *(unsigned int*)r = 0x88e314;
    sub_00630d23((void*)0x778240, (void*)0);
}
