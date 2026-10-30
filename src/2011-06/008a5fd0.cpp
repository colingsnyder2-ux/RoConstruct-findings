// roc 2011-06 008a5fd0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a5fd0
//
// 008a5fd0  83ec14               sub esp, 0x14
// 008a5fd3  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a5fd7  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 008a5fdd  8d1424               lea edx, [esp]
// 008a5fe0  52                   push edx
// 008a5fe1  68d8fdffff           push 0xfffffdd8
// 008a5fe6  89442418             mov dword ptr [esp + 0x18], eax
// 008a5fea  e8a18cf6ff           call 0x80ec90
// 008a5fef  83c414               add esp, 0x14
// 008a5ff2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanging@CXTPRibbonBar@@MAEHPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
