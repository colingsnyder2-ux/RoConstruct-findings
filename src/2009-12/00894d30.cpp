// roc 2009-12 00894d30  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894d30
//
// 00894d30  83ec14               sub esp, 0x14
// 00894d33  8b442418             mov eax, dword ptr [esp + 0x18]
// 00894d37  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00894d3d  8d1424               lea edx, [esp]
// 00894d40  52                   push edx
// 00894d41  68d9fdffff           push 0xfffffdd9
// 00894d46  89442418             mov dword ptr [esp + 0x18], eax
// 00894d4a  e88138f6ff           call 0x7f85d0
// 00894d4f  83c414               add esp, 0x14
// 00894d52  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanged@CXTPRibbonBar@@MAEXPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
