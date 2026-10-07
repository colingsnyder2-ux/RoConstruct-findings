// roc 2008-06 0079a790  unit: CXTPRibbonControlSystemPopupBarListItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079a790
//
// 0079a790  56                   push esi
// 0079a791  8bf1                 mov esi, ecx
// 0079a793  e8a8aefaff           call 0x745640
// 0079a798  c706e4cf8600         mov dword ptr [esi], 0x86cfe4
// 0079a79e  c7462084cf8600       mov dword ptr [esi + 0x20], 0x86cf84
// 0079a7a5  c786600100002c010000 mov dword ptr [esi + 0x160], 0x12c
// 0079a7af  c7866401000015000000 mov dword ptr [esi + 0x164], 0x15
// 0079a7b9  8bc6                 mov eax, esi
// 0079a7bb  5e                   pop esi
// 0079a7bc  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ??0CXTPRibbonControlSystemPopupBarListItem@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
