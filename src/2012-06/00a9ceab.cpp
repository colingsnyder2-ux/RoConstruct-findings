// from server: 100% by auto
// roc 2012-06 00a9ceab  unit: CSpinButtonCtrl  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a9ceab
//
// 00a9ceab  6880ad8c00           push 0x8cad80
// 00a9ceb0  6a1a                 push 0x1a
// 00a9ceb2  6a0c                 push 0xc
// 00a9ceb4  8d85bcfeffff         lea eax, [ebp - 0x144]
// 00a9ceba  50                   push eax
// 00a9cebb  e8b063eeff           call 0x983270
// 00a9cec0  c3                   ret 
// library templates-boost-1_34_1/list_double.cpp (function __unwindfunclet$?sort@?$list@NV?$allocator@N@std@@@std@@QAEXXZ$1)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-boost-1_34_1 list_double.cpp
