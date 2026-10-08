// from server: 44% by colin
// roc 2007-08 004edf50  unit: HeadBuilder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004edf50
//
// 004edf50  83ec08               sub esp, 8
// 004edf53  8b4124               mov eax, dword ptr [ecx + 0x24]
// 004edf56  d94120               fld dword ptr [ecx + 0x20]
// 004edf59  66890424             mov word ptr [esp], ax
// 004edf5d  d95c2404             fstp dword ptr [esp + 4]
// 004edf61  6689442402           mov word ptr [esp + 2], ax
// 004edf66  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004edf6a  8b1424               mov edx, dword ptr [esp]
// 004edf6d  50                   push eax
// 004edf6e  8b442408             mov eax, dword ptr [esp + 8]
// 004edf72  52                   push edx
// 004edf73  50                   push eax
// 004edf74  e8e7ecffff           call 0x4ecc60
// 004edf79  83c408               add esp, 8
// 004edf7c  c20400               ret 4

struct HeadBuilder {
    char pad[0x20];
    float f20;
    unsigned short w24;
    void method(unsigned int arg);
};

extern void __cdecl helper(unsigned short a, unsigned short b, float c, unsigned int d);

void HeadBuilder::method(unsigned int arg)
{
    helper(w24, w24, f20, arg);
}
