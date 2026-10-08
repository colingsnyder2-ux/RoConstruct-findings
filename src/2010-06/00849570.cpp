// roc 2010-06 00849570  unit: CXTPRibbonBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00849570
//
// 00849570  56                   push esi
// 00849571  8bf1                 mov esi, ecx
// 00849573  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00849579  85c0                 test eax, eax
// 0084957b  7416                 je 0x849593
// 0084957d  83c9ff               or ecx, 0xffffffff
// 00849580  0bd1                 or edx, ecx
// 00849582  52                   push edx
// 00849583  51                   push ecx
// 00849584  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00849587  51                   push ecx
// 00849588  8d8884010000         lea ecx, [eax + 0x184]
// 0084958e  e88da60300           call 0x883c20
// 00849593  6a00                 push 0
// 00849595  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 0084959b  e890a30500           call 0x8a3930
// 008495a0  8bce                 mov ecx, esi
// 008495a2  5e                   pop esi
// 008495a3  e9e8faf6ff           jmp 0x7b9090
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseLeave@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
