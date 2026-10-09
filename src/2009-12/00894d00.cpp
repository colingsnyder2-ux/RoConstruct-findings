// roc 2009-12 00894d00  unit: CXTPRibbonBar  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894d00
//
// 00894d00  83ec14               sub esp, 0x14
// 00894d03  8b442418             mov eax, dword ptr [esp + 0x18]
// 00894d07  8b8968020000         mov ecx, dword ptr [ecx + 0x268]
// 00894d0d  8d1424               lea edx, [esp]
// 00894d10  52                   push edx
// 00894d11  68d8fdffff           push 0xfffffdd8
// 00894d16  89442418             mov dword ptr [esp + 0x18], eax
// 00894d1a  e8b138f6ff           call 0x7f85d0
// 00894d1f  83c414               add esp, 0x14
// 00894d22  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonBar.cpp (function ?OnTabChanging@CXTPRibbonBar@@MAEHPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonBar.cpp
