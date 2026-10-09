// roc 2009-12 008f0330  unit: CXTPRibbonQuickAccessControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f0330
//
// 008f0330  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008f0333  83ba7402000000       cmp dword ptr [edx + 0x274], 0
// 008f033a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 008f033d  7501                 jne 0x8f0340
// 008f033f  48                   dec eax
// 008f0340  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 008f0346  56                   push esi
// 008f0347  8b742408             mov esi, dword ptr [esp + 8]
// 008f034b  50                   push eax
// 008f034c  56                   push esi
// 008f034d  e80e6ff5ff           call 0x847260
// 008f0352  83c604               add esi, 4
// 008f0355  56                   push esi
// 008f0356  ff150cb29800         call dword ptr [0x98b20c]
// 008f035c  5e                   pop esi
// 008f035d  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlAdded@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
