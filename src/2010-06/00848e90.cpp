// roc 2010-06 00848e90  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00848e90
//
// 00848e90  83ec14               sub esp, 0x14
// 00848e93  8b442418             mov eax, dword ptr [esp + 0x18]
// 00848e97  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00848e9d  8d1424               lea edx, [esp]
// 00848ea0  52                   push edx
// 00848ea1  68d8fdffff           push 0xfffffdd8
// 00848ea6  89442418             mov dword ptr [esp + 0x18], eax
// 00848eaa  e80139f6ff           call 0x7ac7b0
// 00848eaf  83c414               add esp, 0x14
// 00848eb2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanging@CXTPRibbonBar@@MAEHPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
