// from server: 100% by auto
// roc 2012-06 004499c0  unit: CClassTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004499c0
//
// 004499c0  56                   push esi
// 004499c1  8bf1                 mov esi, ecx
// 004499c3  e8b8875300           call 0x982180
// 004499c8  80be9c00000000       cmp byte ptr [esi + 0x9c], 0
// 004499cf  740c                 je 0x4499dd
// 004499d1  8b4660               mov eax, dword ptr [esi + 0x60]
// 004499d4  8b5048               mov edx, dword ptr [eax + 0x48]
// 004499d7  8d4e60               lea ecx, [esi + 0x60]
// 004499da  5e                   pop esi
// 004499db  ffe2                 jmp edx
// 004499dd  5e                   pop esi
// 004499de  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeCtrlView.cpp (function ?PreSubclassWindow@CXTPTreeViewBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeCtrlView.cpp
