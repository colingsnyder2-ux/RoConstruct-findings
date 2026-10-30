// from server: 100% by auto
// roc 2011-06 008f6ec0  unit: CXTPRibbonGroupControlPopup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6ec0
//
// 008f6ec0  83797000             cmp dword ptr [ecx + 0x70], 0
// 008f6ec4  750c                 jne 0x8f6ed2
// 008f6ec6  83797400             cmp dword ptr [ecx + 0x74], 0
// 008f6eca  7406                 je 0x8f6ed2
// 008f6ecc  b801000000           mov eax, 1
// 008f6ed1  c3                   ret 
// 008f6ed2  33c0                 xor eax, eax
// 008f6ed4  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsOptionButtonVisible@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroup.cpp
