// roc 2010-06 008495e0  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008495e0
//
// 008495e0  56                   push esi
// 008495e1  8bf1                 mov esi, ecx
// 008495e3  83c8ff               or eax, 0xffffffff
// 008495e6  0bc8                 or ecx, eax
// 008495e8  51                   push ecx
// 008495e9  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008495ef  50                   push eax
// 008495f0  8b4620               mov eax, dword ptr [esi + 0x20]
// 008495f3  50                   push eax
// 008495f4  81c184010000         add ecx, 0x184
// 008495fa  e821a60300           call 0x883c20
// 008495ff  6a00                 push 0
// 00849601  8d8ec4010000         lea ecx, [esi + 0x1c4]
// 00849607  e824a30500           call 0x8a3930
// 0084960c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00849610  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00849614  8b442408             mov eax, dword ptr [esp + 8]
// 00849618  51                   push ecx
// 00849619  52                   push edx
// 0084961a  50                   push eax
// 0084961b  8bce                 mov ecx, esi
// 0084961d  e8fe24f7ff           call 0x7bbb20
// 00849622  5e                   pop esi
// 00849623  c20c00               ret 0xc
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?SetTrackingMode@CXTPRibbonBar@@UAEHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
