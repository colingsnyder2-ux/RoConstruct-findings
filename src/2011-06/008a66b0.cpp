// roc 2011-06 008a66b0  unit: CXTPRibbonBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a66b0
//
// 008a66b0  56                   push esi
// 008a66b1  8bf1                 mov esi, ecx
// 008a66b3  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008a66b9  85c0                 test eax, eax
// 008a66bb  7416                 je 0x8a66d3
// 008a66bd  83c9ff               or ecx, 0xffffffff
// 008a66c0  0bd1                 or edx, ecx
// 008a66c2  52                   push edx
// 008a66c3  51                   push ecx
// 008a66c4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008a66c7  51                   push ecx
// 008a66c8  8d8884010000         lea ecx, [eax + 0x184]
// 008a66ce  e83de40200           call 0x8d4b10
// 008a66d3  6a00                 push 0
// 008a66d5  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 008a66db  e8005e0500           call 0x8fc4e0
// 008a66e0  8bce                 mov ecx, esi
// 008a66e2  5e                   pop esi
// 008a66e3  e9f84df7ff           jmp 0x81b4e0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseLeave@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
