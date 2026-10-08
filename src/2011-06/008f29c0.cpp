// from server: 100% by auto
// roc 2011-06 008f29c0  unit: CXTColorSelectorCtrl  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f29c0
//
// 008f29c0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008f29c3  6a00                 push 0
// 008f29c5  6a00                 push 0
// 008f29c7  50                   push eax
// 008f29c8  ff15ec19a400         call dword ptr [0xa419ec]
// 008f29ce  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTButton.cpp (function ?OnInvalidate@CXTButton@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButton.cpp
