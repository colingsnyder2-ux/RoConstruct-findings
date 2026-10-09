// from server: 56% by colin
// roc 2007-08 005e3890  unit: RBX::ArrowTool  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3890
//
// 005e3890  83ec10               sub esp, 0x10
// 005e3893  8b442418             mov eax, dword ptr [esp + 0x18]
// 005e3897  d94010               fld dword ptr [eax + 0x10]
// 005e389a  56                   push esi
// 005e389b  d90548d07b00         fld dword ptr [0x7bd048]
// 005e38a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 005e38a5  dcc9                 fmul st(1), st(0)
// 005e38a7  8d4c2408             lea ecx, [esp + 8]
// 005e38ab  d9c9                 fxch st(1)
// 005e38ad  51                   push ecx
// 005e38ae  83c004               add eax, 4
// 005e38b1  d95c240c             fstp dword ptr [esp + 0xc]
// 005e38b5  50                   push eax
// 005e38b6  d94010               fld dword ptr [eax + 0x10]
// 005e38b9  56                   push esi
// 005e38ba  d8c9                 fmul st(1)
// 005e38bc  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e38c4  d95c2418             fstp dword ptr [esp + 0x18]
// 005e38c8  d84814               fmul dword ptr [eax + 0x14]
// 005e38cb  d95c241c             fstp dword ptr [esp + 0x1c]
// 005e38cf  e8bc9ff3ff           call 0x51d890
// 005e38d4  83c40c               add esp, 0xc
// 005e38d7  8bc6                 mov eax, esi
// 005e38d9  5e                   pop esi
// 005e38da  83c410               add esp, 0x10
// 005e38dd  c3                   ret 

struct ArrowTool {
    char pad[0x10];
    float f10;
    float f14;
};

extern float G_007bd048;

extern "C" void __cdecl sub_0051d890(float* a, float* b, float* c);

ArrowTool* ArrowTool_func(ArrowTool* a, ArrowTool* b)
{
    float arr[4];
    arr[0] = 0.0f;
    arr[1] = b->f10 * G_007bd048;
    arr[2] = a->f10 * G_007bd048;
    arr[3] = b->f14 * G_007bd048;
    sub_0051d890(&a->f10, &b->f10, arr);
    return b;
}
