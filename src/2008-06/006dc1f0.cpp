// roc 2008-06 006dc1f0  unit: CXTTreeBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc1f0
//
// 006dc1f0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 006dc1f3  8b4120               mov eax, dword ptr [ecx + 0x20]
// 006dc1f6  6a00                 push 0
// 006dc1f8  6a09                 push 9
// 006dc1fa  680a110000           push 0x110a
// 006dc1ff  50                   push eax
// 006dc200  ff15142e8000         call dword ptr [0x802e14]
// 006dc206  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetFocusedItem@CXTTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
