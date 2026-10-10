// from server: 82% by colin
// roc 2007-08 00777590  unit: seg_00770000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00777590

extern "C" void __stdcall sub_725520(void*, void*);
extern "C" void* __cdecl sub_41bfd0();
extern "C" void* __cdecl sub_407410(void*);

struct S407220 {
    void f(void*);
};

void sub_777590()
{
    *(int*)0x884a54 = 0x787abc;
    sub_725520((void*)0x8bb488, (void*)0x41c130);
    void* p = sub_41bfd0();
    void* q = sub_407410(&p);
    ((S407220*)q)->f(0);
}
