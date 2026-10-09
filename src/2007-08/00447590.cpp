// from server: 73% by colin
// roc 2007-08 00447590  unit: VCRenderSettings::?$FactoryProduct  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00447590
//
// 00447590  83ec08               sub esp, 8
// 00447593  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00447597  83f801               cmp eax, 1
// 0044759a  c7042401000000       mov dword ptr [esp], 1
// 004475a1  c7442404e8030000     mov dword ptr [esp + 4], 0x3e8
// 004475a9  7e0f                 jle 0x4475ba
// 004475ab  3de8030000           cmp eax, 0x3e8
// 004475b0  8d54240c             lea edx, [esp + 0xc]
// 004475b4  7d0b                 jge 0x4475c1
// 004475b6  8bc2                 mov eax, edx
// 004475b8  eb0b                 jmp 0x4475c5
// 004475ba  8d1424               lea edx, [esp]
// 004475bd  8bc2                 mov eax, edx
// 004475bf  eb04                 jmp 0x4475c5
// 004475c1  8d442404             lea eax, [esp + 4]
// 004475c5  8b00                 mov eax, dword ptr [eax]
// 004475c7  3b05607a8900         cmp eax, dword ptr [0x897a60]
// 004475cd  7415                 je 0x4475e4
// 004475cf  a3607a8900           mov dword ptr [0x897a60], eax
// 004475d4  83c408               add esp, 8
// 004475d7  c7442404c0bc8b00     mov dword ptr [esp + 4], 0x8bbcc0
// 004475df  e92cd1ffff           jmp 0x444710
// 004475e4  83c408               add esp, 8
// 004475e7  c20400               ret 4

extern int G_897a60;
extern char G_8bbcc0;

void __stdcall sub_444710(int);

void __stdcall f_447590(int a)
{
    int v0 = 1;
    int v1 = 1000;
    int* p;
    if (a <= 1) {
        p = &v0;
    } else if (a >= 1000) {
        p = &v1;
    } else {
        p = &a;
    }
    int val = *p;
    if (val != G_897a60) {
        G_897a60 = val;
        sub_444710((int)&G_8bbcc0);
    }
}
