// from server: 100% by auto
// roc 2011-06 008f6e90  unit: CXTPRibbonGroupControlPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6e90
//
// 008f6e90  56                   push esi
// 008f6e91  8bf1                 mov esi, ecx
// 008f6e93  8b4658               mov eax, dword ptr [esi + 0x58]
// 008f6e96  50                   push eax
// 008f6e97  e8e4570000           call 0x8fc680
// 008f6e9c  83c404               add esp, 4
// 008f6e9f  85c0                 test eax, eax
// 008f6ea1  740c                 je 0x8f6eaf
// 008f6ea3  397014               cmp dword ptr [eax + 0x14], esi
// 008f6ea6  7507                 jne 0x8f6eaf
// 008f6ea8  b801000000           mov eax, 1
// 008f6ead  5e                   pop esi
// 008f6eae  c3                   ret 
// 008f6eaf  33c0                 xor eax, eax
// 008f6eb1  5e                   pop esi
// 008f6eb2  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsHighlighted@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroup.cpp
