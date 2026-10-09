// roc 2009-12 008953e0  unit: CXTPRibbonBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008953e0
//
// 008953e0  56                   push esi
// 008953e1  8bf1                 mov esi, ecx
// 008953e3  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008953e9  85c0                 test eax, eax
// 008953eb  7416                 je 0x895403
// 008953ed  83c9ff               or ecx, 0xffffffff
// 008953f0  0bd1                 or edx, ecx
// 008953f2  52                   push edx
// 008953f3  51                   push ecx
// 008953f4  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008953f7  51                   push ecx
// 008953f8  8d8884010000         lea ecx, [eax + 0x184]
// 008953fe  e83da60300           call 0x8cfa40
// 00895403  6a00                 push 0
// 00895405  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 0089540b  e830a30500           call 0x8ef740
// 00895410  8bce                 mov ecx, esi
// 00895412  5e                   pop esi
// 00895413  e908fbf6ff           jmp 0x804f20
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseLeave@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
