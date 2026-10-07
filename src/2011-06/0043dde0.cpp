// roc 2011-06 0043dde0  unit: CClassTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0043dde0
//
// 0043dde0  56                   push esi
// 0043dde1  8bf1                 mov esi, ecx
// 0043dde3  e8dcc23c00           call 0x80a0c4
// 0043dde8  80be9c00000000       cmp byte ptr [esi + 0x9c], 0
// 0043ddef  740c                 je 0x43ddfd
// 0043ddf1  8b4660               mov eax, dword ptr [esi + 0x60]
// 0043ddf4  8b5048               mov edx, dword ptr [eax + 0x48]
// 0043ddf7  8d4e60               lea ecx, [esi + 0x60]
// 0043ddfa  5e                   pop esi
// 0043ddfb  ffe2                 jmp edx
// 0043ddfd  5e                   pop esi
// 0043ddfe  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ?PreSubclassWindow@CXTPTreeViewBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
