// roc 2009-06 007b8190  unit: CXTPRibbonBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b8190
//
// 007b8190  56                   push esi
// 007b8191  8bf1                 mov esi, ecx
// 007b8193  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 007b8199  85c0                 test eax, eax
// 007b819b  7416                 je 0x7b81b3
// 007b819d  83c9ff               or ecx, 0xffffffff
// 007b81a0  0bd1                 or edx, ecx
// 007b81a2  52                   push edx
// 007b81a3  51                   push ecx
// 007b81a4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007b81a7  51                   push ecx
// 007b81a8  8d8884010000         lea ecx, [eax + 0x184]
// 007b81ae  e8ddcc0300           call 0x7f4e90
// 007b81b3  6a00                 push 0
// 007b81b5  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 007b81bb  e840ba0500           call 0x813c00
// 007b81c0  8bce                 mov ecx, esi
// 007b81c2  5e                   pop esi
// 007b81c3  e9185cf7ff           jmp 0x72dde0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseLeave@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
