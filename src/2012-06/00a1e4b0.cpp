// roc 2012-06 00a1e4b0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e4b0
//
// 00a1e4b0  83ec14               sub esp, 0x14
// 00a1e4b3  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a1e4b7  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00a1e4bd  8d1424               lea edx, [esp]
// 00a1e4c0  52                   push edx
// 00a1e4c1  68d9fdffff           push 0xfffffdd9
// 00a1e4c6  89442418             mov dword ptr [esp + 0x18], eax
// 00a1e4ca  e8d18af6ff           call 0x986fa0
// 00a1e4cf  83c414               add esp, 0x14
// 00a1e4d2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanged@CXTPRibbonBar@@MAEXPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
