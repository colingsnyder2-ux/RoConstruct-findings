// roc 2012-06 00a1eb60  unit: CXTPRibbonBar  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1eb60
//
// 00a1eb60  56                   push esi
// 00a1eb61  8bf1                 mov esi, ecx
// 00a1eb63  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 00a1eb69  85c0                 test eax, eax
// 00a1eb6b  7416                 je 0xa1eb83
// 00a1eb6d  83c9ff               or ecx, 0xffffffff
// 00a1eb70  0bd1                 or edx, ecx
// 00a1eb72  52                   push edx
// 00a1eb73  51                   push ecx
// 00a1eb74  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a1eb77  51                   push ecx
// 00a1eb78  8d8884010000         lea ecx, [eax + 0x184]
// 00a1eb7e  e8dde20200           call 0xa4ce60
// 00a1eb83  6a00                 push 0
// 00a1eb85  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00a1eb8b  e8805c0500           call 0xa74810
// 00a1eb90  8bce                 mov ecx, esi
// 00a1eb92  5e                   pop esi
// 00a1eb93  e9384cf7ff           jmp 0x9937d0
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnMouseLeave@CXTPRibbonBar@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
