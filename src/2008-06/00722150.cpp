// roc 2008-06 00722150  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722150
//
// 00722150  83ec14               sub esp, 0x14
// 00722153  8b442418             mov eax, dword ptr [esp + 0x18]
// 00722157  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 0072215d  8d1424               lea edx, [esp]
// 00722160  52                   push edx
// 00722161  68d8fdffff           push 0xfffffdd8
// 00722166  89442418             mov dword ptr [esp + 0x18], eax
// 0072216a  e811b6f8ff           call 0x6ad780
// 0072216f  83c414               add esp, 0x14
// 00722172  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanging@CXTPRibbonBar@@MAEHPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
