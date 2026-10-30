// roc 2012-06 00a76b60  unit: CXTPRibbonControlSystemPopupBarListItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76b60
//
// 00a76b60  56                   push esi
// 00a76b61  8bf1                 mov esi, ecx
// 00a76b63  e8182efaff           call 0xa19980
// 00a76b68  c706dc82c200         mov dword ptr [esi], 0xc282dc
// 00a76b6e  c746207c82c200       mov dword ptr [esi + 0x20], 0xc2827c
// 00a76b75  c786600100002c010000 mov dword ptr [esi + 0x160], 0x12c
// 00a76b7f  c7866401000015000000 mov dword ptr [esi + 0x164], 0x15
// 00a76b89  8bc6                 mov eax, esi
// 00a76b8b  5e                   pop esi
// 00a76b8c  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ??0CXTPRibbonControlSystemPopupBarListItem@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
