// from server: 100% by auto
// roc 2011-06 00847350  unit: CXTTreeBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847350
//
// 00847350  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00847353  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00847356  6a00                 push 0
// 00847358  6a09                 push 9
// 0084735a  680a110000           push 0x110a
// 0084735f  50                   push eax
// 00847360  ff15c019a400         call dword ptr [0xa419c0]
// 00847366  c3                   ret 
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetFocusedItem@CXTPTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
