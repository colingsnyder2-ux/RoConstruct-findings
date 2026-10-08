// roc 2009-06 007b7ae0  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007b7ae0
//
// 007b7ae0  83ec14               sub esp, 0x14
// 007b7ae3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007b7ae7  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 007b7aed  8d1424               lea edx, [esp]
// 007b7af0  52                   push edx
// 007b7af1  68d9fdffff           push 0xfffffdd9
// 007b7af6  89442418             mov dword ptr [esp + 0x18], eax
// 007b7afa  e891a3f6ff           call 0x721e90
// 007b7aff  83c414               add esp, 0x14
// 007b7b02  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanged@CXTPRibbonBar@@MAEXPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
