// from server: 100% by auto
// roc 2011-06 00428a90  unit: CXTTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00428a90
//
// 00428a90  56                   push esi
// 00428a91  8bf1                 mov esi, ecx
// 00428a93  e82c163e00           call 0x80a0c4
// 00428a98  80be9000000000       cmp byte ptr [esi + 0x90], 0
// 00428a9f  740c                 je 0x428aad
// 00428aa1  8b4654               mov eax, dword ptr [esi + 0x54]
// 00428aa4  8b5048               mov edx, dword ptr [eax + 0x48]
// 00428aa7  8d4e54               lea ecx, [esi + 0x54]
// 00428aaa  5e                   pop esi
// 00428aab  ffe2                 jmp edx
// 00428aad  5e                   pop esi
// 00428aae  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPMarkupTreeCtrl.cpp (function ?PreSubclassWindow@CXTPTreeCtrlBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPMarkupTreeCtrl.cpp
