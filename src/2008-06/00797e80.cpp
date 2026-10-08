// from server: 100% by auto
// roc 2008-06 00797e80  unit: CXTPRibbonGroupControlPopup  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00797e80
//
// 00797e80  56                   push esi
// 00797e81  8bf1                 mov esi, ecx
// 00797e83  8b4658               mov eax, dword ptr [esi + 0x58]
// 00797e86  50                   push eax
// 00797e87  e834f5ffff           call 0x7973c0
// 00797e8c  83c404               add esp, 4
// 00797e8f  85c0                 test eax, eax
// 00797e91  740c                 je 0x797e9f
// 00797e93  397014               cmp dword ptr [eax + 0x14], esi
// 00797e96  7507                 jne 0x797e9f
// 00797e98  b801000000           mov eax, 1
// 00797e9d  5e                   pop esi
// 00797e9e  c3                   ret 
// 00797e9f  33c0                 xor eax, eax
// 00797ea1  5e                   pop esi
// 00797ea2  c3                   ret 
// library xtp-11.2.2/Source\Ribbon\XTPRibbonGroup.cpp (function ?IsHighlighted@CXTPRibbonGroup@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonGroup.cpp
