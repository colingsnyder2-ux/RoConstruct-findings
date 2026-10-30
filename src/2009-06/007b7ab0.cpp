// roc 2009-06 007b7ab0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7ab0
//
// 007b7ab0  83ec14               sub esp, 0x14
// 007b7ab3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b7ab7  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 007b7abd  8d1424               lea edx, [esp]
// 007b7ac0  52                   push edx
// 007b7ac1  68d8fdffff           push 0xfffffdd8
// 007b7ac6  89442418             mov dword ptr [esp + 0x18], eax
// 007b7aca  e8c1a3f6ff           call 0x721e90
// 007b7acf  83c414               add esp, 0x14
// 007b7ad2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanging@CXTPRibbonBar@@MAEHPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
