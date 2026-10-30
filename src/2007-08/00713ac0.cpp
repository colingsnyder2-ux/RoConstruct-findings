// roc 2007-08 00713ac0  unit: CXTCaptionThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713ac0
//
// 00713ac0  6aff                 push -1
// 00713ac2  6878b47600           push 0x76b478
// 00713ac7  64a100000000         mov eax, dword ptr fs:[0]
// 00713acd  50                   push eax
// 00713ace  51                   push ecx
// 00713acf  56                   push esi
// 00713ad0  a188518b00           mov eax, dword ptr [0x8b5188]
// 00713ad5  33c4                 xor eax, esp
// 00713ad7  50                   push eax
// 00713ad8  8d44240c             lea eax, [esp + 0xc]
// 00713adc  64a300000000         mov dword ptr fs:[0], eax
// 00713ae2  8bf1                 mov esi, ecx
// 00713ae4  89742408             mov dword ptr [esp + 8], esi
// 00713ae8  e863def7ff           call 0x691950
// 00713aed  8d4e14               lea ecx, [esi + 0x14]
// 00713af0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00713af8  c7069cea7d00         mov dword ptr [esi], 0x7dea9c
// 00713afe  e89d49f5ff           call 0x6684a0
// 00713b03  8d4e20               lea ecx, [esi + 0x20]
// 00713b06  e89549f5ff           call 0x6684a0
// 00713b0b  8bc6                 mov eax, esi
// 00713b0d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00713b11  64890d00000000       mov dword ptr fs:[0], ecx
// 00713b18  59                   pop ecx
// 00713b19  5e                   pop esi
// 00713b1a  83c410               add esp, 0x10
// 00713b1d  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp