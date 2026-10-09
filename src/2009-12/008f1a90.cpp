// roc 2009-12 008f1a90  unit: CXTPRibbonControlSystemPopupBarListItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1a90
//
// 008f1a90  56                   push esi
// 008f1a91  8bf1                 mov esi, ecx
// 008f1a93  e8c8e6f9ff           call 0x890160
// 008f1a98  c7062ceea000         mov dword ptr [esi], 0xa0ee2c
// 008f1a9e  c74620cceda000       mov dword ptr [esi + 0x20], 0xa0edcc
// 008f1aa5  c786600100002c010000 mov dword ptr [esi + 0x160], 0x12c
// 008f1aaf  c7866401000015000000 mov dword ptr [esi + 0x164], 0x15
// 008f1ab9  8bc6                 mov eax, esi
// 008f1abb  5e                   pop esi
// 008f1abc  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ??0CXTPRibbonControlSystemPopupBarListItem@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
