// roc 2011-06 008fe7e0  unit: CXTPRibbonControlSystemPopupBarListItem  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008fe7e0
//
// 008fe7e0  56                   push esi
// 008fe7e1  8bf1                 mov esi, ecx
// 008fe7e3  e8482dfaff           call 0x8a1530
// 008fe7e8  c70654ccad00         mov dword ptr [esi], 0xadcc54
// 008fe7ee  c74620f4cbad00       mov dword ptr [esi + 0x20], 0xadcbf4
// 008fe7f5  c786600100002c010000 mov dword ptr [esi + 0x160], 0x12c
// 008fe7ff  c7866401000015000000 mov dword ptr [esi + 0x164], 0x15
// 008fe809  8bc6                 mov eax, esi
// 008fe80b  5e                   pop esi
// 008fe80c  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonSystemButton.cpp (function ??0CXTPRibbonControlSystemPopupBarListItem@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonSystemButton.cpp
