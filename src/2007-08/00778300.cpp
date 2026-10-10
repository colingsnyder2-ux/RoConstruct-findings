// from server: 80% by colin
// roc 2007-08 00778300  size: 55 bytes

extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_00486ef0();
extern "C" void* __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220(void*);

void sub_00778300()
{
    *(int*)0x88e308 = 0x79b014;
    sub_00725520((void*)0x8bdca4, (void*)0x487950);
    void* p = sub_00486ef0();
    void* q = sub_00407410(&p);
    sub_00407220(q);
}
