// roc 2012-06 00a1e480  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1e480
//
// 00a1e480  83ec14               sub esp, 0x14
// 00a1e483  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a1e487  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00a1e48d  8d1424               lea edx, [esp]
// 00a1e490  52                   push edx
// 00a1e491  68d8fdffff           push 0xfffffdd8
// 00a1e496  89442418             mov dword ptr [esp + 0x18], eax
// 00a1e49a  e8018bf6ff           call 0x986fa0
// 00a1e49f  83c414               add esp, 0x14
// 00a1e4a2  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanging@CXTPRibbonBar@@MAEHPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
