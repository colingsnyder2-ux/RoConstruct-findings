// roc 2009-06 00815ef0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00815ef0
//
// 00815ef0  56                   push esi
// 00815ef1  8bf1                 mov esi, ecx
// 00815ef3  e8a88afaff           call 0x7be9a0
// 00815ef8  c706c4e09000         mov dword ptr [esi], 0x90e0c4
// 00815efe  c7462064e09000       mov dword ptr [esi + 0x20], 0x90e064
// 00815f05  c786600100002c010000 mov dword ptr [esi + 0x160], 0x12c
// 00815f0f  c7866401000015000000 mov dword ptr [esi + 0x164], 0x15
// 00815f19  8bc6                 mov eax, esi
// 00815f1b  5e                   pop esi
// 00815f1c  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ??0CXTPRibbonControlSystemPopupBarListItem@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
