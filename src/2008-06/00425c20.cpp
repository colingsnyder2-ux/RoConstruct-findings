// roc 2008-06 00425c20  unit: CXTTreeCtrl  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00425c20
//
// 00425c20  56                   push esi
// 00425c21  8bf1                 mov esi, ecx
// 00425c23  e8c4aa2700           call 0x6a06ec
// 00425c28  80be9000000000       cmp byte ptr [esi + 0x90], 0
// 00425c2f  740c                 je 0x425c3d
// 00425c31  8b4654               mov eax, dword ptr [esi + 0x54]
// 00425c34  8b5048               mov edx, dword ptr [eax + 0x48]
// 00425c37  8d4e54               lea ecx, [esi + 0x54]
// 00425c3a  5e                   pop esi
// 00425c3b  ffe2                 jmp edx
// 00425c3d  5e                   pop esi
// 00425c3e  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeCtrlView.cpp (function ?PreSubclassWindow@CXTTreeCtrlBase@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeCtrlView.cpp
