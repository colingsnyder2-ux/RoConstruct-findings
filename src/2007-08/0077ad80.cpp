// from server: 82% by colin
extern "C" void __cdecl sub_00725520(void*, void*);
extern "C" void* __cdecl sub_0058D8A0();
extern "C" void __cdecl sub_00407410(void*);
extern "C" void __cdecl sub_00407220();

void sub_0077AD80()
{
    *(void**)0x8A4514 = (void*)0x7AF720;
    sub_00725520((void*)0x8C37C8, (void*)0x58DDA0);
    void* p = sub_0058D8A0();
    sub_00407410(&p);
    sub_00407220();
}
