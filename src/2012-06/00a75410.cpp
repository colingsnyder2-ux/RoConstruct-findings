// roc 2012-06 00a75410  unit: CXTPRibbonQuickAccessControls  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a75410
//
// 00a75410  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a75413  83ba7402000000       cmp dword ptr [edx + 0x274], 0
// 00a7541a  8b412c               mov eax, dword ptr [ecx + 0x2c]
// 00a7541d  7501                 jne 0xa75420
// 00a7541f  48                   dec eax
// 00a75420  8b8afc000000         mov ecx, dword ptr [edx + 0xfc]
// 00a75426  56                   push esi
// 00a75427  8b742408             mov esi, dword ptr [esp + 8]
// 00a7542b  50                   push eax
// 00a7542c  56                   push esi
// 00a7542d  e8debcf5ff           call 0x9d1110
// 00a75432  83c604               add esi, 4
// 00a75435  56                   push esi
// 00a75436  ff159821b200         call dword ptr [0xb22198]
// 00a7543c  5e                   pop esi
// 00a7543d  c20400               ret 4
// library xtp-11.2.2/Source\Ribbon\XTPRibbonQuickAccessControls.cpp (function ?OnControlAdded@CXTPRibbonQuickAccessControls@@MAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonQuickAccessControls.cpp
