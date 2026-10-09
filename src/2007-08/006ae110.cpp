// from server: 37% by colin
// roc 2007-08 006ae110  unit: CXTPRibbonTheme  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ae110
//
// 006ae110  6aff                 push -1
// 006ae112  6888507600           push 0x765088
// 006ae117  64a100000000         mov eax, dword ptr fs:[0]
// 006ae11d  50                   push eax
// 006ae11e  51                   push ecx
// 006ae11f  56                   push esi
// 006ae120  a188518b00           mov eax, dword ptr [0x8b5188]
// 006ae125  33c4                 xor eax, esp
// 006ae127  50                   push eax
// 006ae128  8d44240c             lea eax, [esp + 0xc]
// 006ae12c  64a300000000         mov dword ptr fs:[0], eax
// 006ae132  8bf1                 mov esi, ecx
// 006ae134  89742408             mov dword ptr [esp + 8], esi
// 006ae138  e843d00600           call 0x71b180
// 006ae13d  8d8e08020000         lea ecx, [esi + 0x208]
// 006ae143  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006ae14b  c70650597d00         mov dword ptr [esi], 0x7d5950
// 006ae151  e84aa3fbff           call 0x6684a0
// 006ae156  8bc6                 mov eax, esi
// 006ae158  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ae15c  64890d00000000       mov dword ptr fs:[0], ecx
// 006ae163  59                   pop ecx
// 006ae164  5e                   pop esi
// 006ae165  83c410               add esp, 0x10
// 006ae168  c3                   ret 

struct CXTPRibbonTheme {
    CXTPRibbonTheme* Construct();
};

extern "C" void __stdcall sub_71B180();
extern "C" void __stdcall sub_6684A0();

CXTPRibbonTheme* CXTPRibbonTheme::Construct()
{
    sub_71B180();
    *(void**)((char*)this + 0x208) = 0;
    *(void**)this = (void*)0x7d5950;
    sub_6684A0();
    return this;
}
