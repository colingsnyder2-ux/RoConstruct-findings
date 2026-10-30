// from server: 100% by auto
// roc 2008-06 004337c0  unit: CClassTreeView  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004337c0
//
// 004337c0  56                   push esi
// 004337c1  8bf1                 mov esi, ecx
// 004337c3  e824cf2600           call 0x6a06ec
// 004337c8  80be9c00000000       cmp byte ptr [esi + 0x9c], 0
// 004337cf  740c                 je 0x4337dd
// 004337d1  8b4660               mov eax, dword ptr [esi + 0x60]
// 004337d4  8b5048               mov edx, dword ptr [eax + 0x48]
// 004337d7  8d4e60               lea ecx, [esi + 0x60]
// 004337da  5e                   pop esi
// 004337db  ffe2                 jmp edx
// 004337dd  5e                   pop esi
// 004337de  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeCtrlView.cpp (function ?PreSubclassWindow@CXTTreeViewBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeCtrlView.cpp
