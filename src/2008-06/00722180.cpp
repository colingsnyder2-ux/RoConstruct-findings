// roc 2008-06 00722180  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00722180
//
// 00722180  83ec14               sub esp, 0x14
// 00722183  8b442418             mov eax, dword ptr [esp + 0x18]
// 00722187  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 0072218d  8d1424               lea edx, [esp]
// 00722190  52                   push edx
// 00722191  68d9fdffff           push 0xfffffdd9
// 00722196  89442418             mov dword ptr [esp + 0x18], eax
// 0072219a  e8e1b5f8ff           call 0x6ad780
// 0072219f  83c414               add esp, 0x14
// 007221a2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanged@CXTPRibbonBar@@MAEXPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
