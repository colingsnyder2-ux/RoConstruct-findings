// roc 2012-06 00a6f220  unit: CXTPRibbonGroupControlPopup  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f220
//
// 00a6f220  83797000             cmp dword ptr [ecx + 0x70], 0
// 00a6f224  750c                 jne 0xa6f232
// 00a6f226  83797400             cmp dword ptr [ecx + 0x74], 0
// 00a6f22a  7406                 je 0xa6f232
// 00a6f22c  b801000000           mov eax, 1
// 00a6f231  c3                   ret 
// 00a6f232  33c0                 xor eax, eax
// 00a6f234  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsOptionButtonVisible@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroup.cpp
