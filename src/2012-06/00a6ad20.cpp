// roc 2012-06 00a6ad20  unit: CXTColorSelectorCtrl  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6ad20
//
// 00a6ad20  8b4120               mov eax, dword ptr [ecx + 0x20]
// 00a6ad23  6a00                 push 0
// 00a6ad25  6a00                 push 0
// 00a6ad27  50                   push eax
// 00a6ad28  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a6ad2e  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnInvalidate@CXTButton@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
