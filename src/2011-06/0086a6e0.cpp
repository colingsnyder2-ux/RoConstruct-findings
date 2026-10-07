// roc 2011-06 0086a6e0  unit: CXTPPropertyGrid  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086a6e0
//
// 0086a6e0  85c9                 test ecx, ecx
// 0086a6e2  7417                 je 0x86a6fb
// 0086a6e4  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0086a6e7  85c0                 test eax, eax
// 0086a6e9  7410                 je 0x86a6fb
// 0086a6eb  6885010000           push 0x185
// 0086a6f0  6a00                 push 0
// 0086a6f2  6a00                 push 0
// 0086a6f4  50                   push eax
// 0086a6f5  ff15b41aa400         call dword ptr [0xa41ab4]
// 0086a6fb  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RedrawControl@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
