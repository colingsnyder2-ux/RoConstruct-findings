// from server: 100% by auto
// roc 2008-06 00799020  unit: CXTPRibbonQuickAccessControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00799020
//
// 00799020  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00799023  83ba7402000000       cmp dword ptr [edx + 0x274], 0
// 0079902a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 0079902d  7501                 jne 0x799030
// 0079902f  48                   dec eax
// 00799030  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 00799036  56                   push esi
// 00799037  8b742408             mov esi, dword ptr [esp + 8]
// 0079903b  50                   push eax
// 0079903c  56                   push esi
// 0079903d  e8feaaf5ff           call 0x6f3b40
// 00799042  83c604               add esi, 4
// 00799045  56                   push esi
// 00799046  ff15b0218000         call dword ptr [0x8021b0]
// 0079904c  5e                   pop esi
// 0079904d  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlAdded@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
