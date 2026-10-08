// from server: 100% by auto
// roc 2012-06 00a6f1f0  unit: CXTPRibbonGroupControlPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6f1f0
//
// 00a6f1f0  56                   push esi
// 00a6f1f1  8bf1                 mov esi, ecx
// 00a6f1f3  8b4658               mov eax, dword ptr [esi + 0x58]
// 00a6f1f6  50                   push eax
// 00a6f1f7  e894570000           call 0xa74990
// 00a6f1fc  83c404               add esp, 4
// 00a6f1ff  85c0                 test eax, eax
// 00a6f201  740c                 je 0xa6f20f
// 00a6f203  397014               cmp dword ptr [eax + 0x14], esi
// 00a6f206  7507                 jne 0xa6f20f
// 00a6f208  b801000000           mov eax, 1
// 00a6f20d  5e                   pop esi
// 00a6f20e  c3                   ret 
// 00a6f20f  33c0                 xor eax, eax
// 00a6f211  5e                   pop esi
// 00a6f212  c3                   ret 
// library xtp-15.2.1/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsHighlighted@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Ribbon/XTPRibbonGroup.cpp
