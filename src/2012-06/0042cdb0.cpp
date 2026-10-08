// from server: 100% by auto
// roc 2012-06 0042cdb0  unit: CXTTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042cdb0
//
// 0042cdb0  56                   push esi
// 0042cdb1  8bf1                 mov esi, ecx
// 0042cdb3  e8c8535500           call 0x982180
// 0042cdb8  80be9000000000       cmp byte ptr [esi + 0x90], 0
// 0042cdbf  740c                 je 0x42cdcd
// 0042cdc1  8b4654               mov eax, dword ptr [esi + 0x54]
// 0042cdc4  8b5048               mov edx, dword ptr [eax + 0x48]
// 0042cdc7  8d4e54               lea ecx, [esi + 0x54]
// 0042cdca  5e                   pop esi
// 0042cdcb  ffe2                 jmp edx
// 0042cdcd  5e                   pop esi
// 0042cdce  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPMarkupTreeCtrl.cpp (function ?PreSubclassWindow@CXTPTreeCtrlBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPMarkupTreeCtrl.cpp
