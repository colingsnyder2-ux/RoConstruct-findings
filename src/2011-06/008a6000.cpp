// roc 2011-06 008a6000  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a6000
//
// 008a6000  83ec14               sub esp, 0x14
// 008a6003  8b442418             mov eax, dword ptr [esp + 0x18]
// 008a6007  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 008a600d  8d1424               lea edx, [esp]
// 008a6010  52                   push edx
// 008a6011  68d9fdffff           push 0xfffffdd9
// 008a6016  89442418             mov dword ptr [esp + 0x18], eax
// 008a601a  e8718cf6ff           call 0x80ec90
// 008a601f  83c414               add esp, 0x14
// 008a6022  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanged@CXTPRibbonBar@@MAEXPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
