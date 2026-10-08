// from server: 44% by colin
// roc 2007-08 004edf80  unit: HeadBuilder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004edf80
//
// 004edf80  83ec08               sub esp, 8
// 004edf83  8b4124               mov eax, dword ptr [ecx + 0x24]
// 004edf86  d94120               fld dword ptr [ecx + 0x20]
// 004edf89  66890424             mov word ptr [esp], ax
// 004edf8d  d95c2404             fstp dword ptr [esp + 4]
// 004edf91  6689442402           mov word ptr [esp + 2], ax
// 004edf96  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004edf9a  8b1424               mov edx, dword ptr [esp]
// 004edf9d  50                   push eax
// 004edf9e  8b442408             mov eax, dword ptr [esp + 8]
// 004edfa2  52                   push edx
// 004edfa3  50                   push eax
// 004edfa4  e8d7efffff           call 0x4ecf80
// 004edfa9  83c408               add esp, 8
// 004edfac  c20400               ret 4

struct HeadBuilder {
    char pad[0x20];
    float f20;
    unsigned short w24;
    void method(int);
};

extern void __cdecl helper_004ecf80(unsigned short, unsigned short, float, int);

void HeadBuilder::method(int arg)
{
    unsigned short a = w24;
    float b = f20;
    helper_004ecf80(a, a, b, arg);
}
