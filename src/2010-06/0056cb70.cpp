// roc 2010-06 0056cb70  unit: seg_00560000  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056cb70
//
// 0056cb70  684c33a200           push 0xa2334c
// 0056cb75  8d4658               lea eax, [esi + 0x58]
// 0056cb78  50                   push eax
// 0056cb79  56                   push esi
// 0056cb7a  b83833a200           mov eax, 0xa23338
// 0056cb7f  e82cffffff           call 0x56cab0
// 0056cb84  689033a200           push 0xa23390
// 0056cb89  8d4e68               lea ecx, [esi + 0x68]
// 0056cb8c  51                   push ecx
// 0056cb8d  56                   push esi
// 0056cb8e  b87833a200           mov eax, 0xa23378
// 0056cb93  e818ffffff           call 0x56cab0
// 0056cb98  686c33a200           push 0xa2336c
// 0056cb9d  8d565c               lea edx, [esi + 0x5c]
// 0056cba0  52                   push edx
// 0056cba1  56                   push esi
// 0056cba2  b85833a200           mov eax, 0xa23358
// 0056cba7  e804ffffff           call 0x56cab0
// 0056cbac  684834a200           push 0xa23448
// 0056cbb1  8d466c               lea eax, [esi + 0x6c]
// 0056cbb4  50                   push eax
// 0056cbb5  56                   push esi
// 0056cbb6  b83434a200           mov eax, 0xa23434
// 0056cbbb  e8f0feffff           call 0x56cab0
// 0056cbc0  83c430               add esp, 0x30
// 0056cbc3  c3                   ret 
// library jpeg-6b/jcparam.c (function _std_huff_tables)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcparam.c
