// from server: 100% by auto
// roc 2007-08 0052a370  unit: seg_00520000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a370
//
// 0052a370  69c0fe010000         imul eax, eax, 0x1fe
// 0052a376  8d8408ff000000       lea eax, [eax + ecx + 0xff]
// 0052a37d  99                   cdq 
// 0052a37e  03c9                 add ecx, ecx
// 0052a380  f7f9                 idiv ecx
// 0052a382  c3                   ret 
// library jpeg-6b/jquant1.c (function _largest_input_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
