// from server: 100% by auto
// roc 2007-08 00665420  unit: CXTTreeBase  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665420
//
// 00665420  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 00665423  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00665426  6a00                 push 0
// 00665428  6a09                 push 9
// 0066542a  680a110000           push 0x110a
// 0066542f  50                   push eax
// 00665430  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00665436  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetFocusedItem@CXTTreeBase@@QBEPAU_TREEITEM@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
