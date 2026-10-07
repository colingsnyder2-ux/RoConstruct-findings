// roc 2012-06 009bf7d0  unit: CXTTreeBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf7d0
//
// 009bf7d0  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 009bf7d3  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009bf7d6  6a00                 push 0
// 009bf7d8  6a09                 push 9
// 009bf7da  680a110000           push 0x110a
// 009bf7df  50                   push eax
// 009bf7e0  ff15043cb200         call dword ptr [0xb23c04]
// 009bf7e6  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetFocusedItem@CXTPTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
