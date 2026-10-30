// roc 2010-06 00848ec0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848ec0
//
// 00848ec0  83ec14               sub esp, 0x14
// 00848ec3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00848ec7  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00848ecd  8d1424               lea edx, [esp]
// 00848ed0  52                   push edx
// 00848ed1  68d9fdffff           push 0xfffffdd9
// 00848ed6  89442418             mov dword ptr [esp + 0x18], eax
// 00848eda  e8d138f6ff           call 0x7ac7b0
// 00848edf  83c414               add esp, 0x14
// 00848ee2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanged@CXTPRibbonBar@@MAEXPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
