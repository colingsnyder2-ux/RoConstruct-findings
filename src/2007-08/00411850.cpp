// from server: 50% by colin
// roc 2007-08 00411850  unit: boost::bad_any_cast  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00411850
//
// 00411850  83ec0c               sub esp, 0xc
// 00411853  8b442410             mov eax, dword ptr [esp + 0x10]
// 00411857  50                   push eax
// 00411858  8d4c2404             lea ecx, [esp + 4]
// 0041185c  ff1518e77700         call dword ptr [0x77e718]
// 00411862  68540d8400           push 0x840d54
// 00411867  8d4c2404             lea ecx, [esp + 4]
// 0041186b  51                   push ecx
// 0041186c  c7442408fc6d7800     mov dword ptr [esp + 8], 0x786dfc
// 00411874  e825f32100           call 0x630b9e

struct bad_cast {
    void* vfptr;
    bad_cast(const bad_cast&);
};

extern "C" void __stdcall sub_77e718();
extern "C" void __cdecl sub_630b9e();

struct bad_any_cast : bad_cast {
    bad_any_cast(const bad_any_cast&);
};

bad_any_cast::bad_any_cast(const bad_any_cast& other) : bad_cast(other)
{
    vfptr = (void*)0x786dfc;
    sub_630b9e();
}
