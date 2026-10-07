// roc 2012-06 009e2c40  unit: CXTPPropertyGrid  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e2c40
//
// 009e2c40  85c9                 test ecx, ecx
// 009e2c42  7417                 je 0x9e2c5b
// 009e2c44  8b4120               mov eax, dword ptr [ecx + 0x20]
// 009e2c47  85c0                 test eax, eax
// 009e2c49  7410                 je 0x9e2c5b
// 009e2c4b  6885010000           push 0x185
// 009e2c50  6a00                 push 0
// 009e2c52  6a00                 push 0
// 009e2c54  50                   push eax
// 009e2c55  ff15403db200         call dword ptr [0xb23d40]
// 009e2c5b  c3                   ret 
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGrid.cpp (function ?RedrawControl@CXTPPropertyGrid@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGrid.cpp
