// from server: 100% by auto
// roc 2011-06 009cfe8b  unit: CSpinButtonCtrl  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009cfe8b
//
// 009cfe8b  68d0857300           push 0x7385d0
// 009cfe90  6a1a                 push 0x1a
// 009cfe92  6a0c                 push 0xc
// 009cfe94  8d85bcfeffff         lea eax, [ebp - 0x144]
// 009cfe9a  50                   push eax
// 009cfe9b  e838b3e3ff           call 0x80b1d8
// 009cfea0  c3                   ret 
// library templates-boost-1_34_1/list_double.cpp (function __unwindfunclet$?sort@?$list@NV?$allocator@N@std@@@std@@QAEXXZ$1)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 list_double.cpp
