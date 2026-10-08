// roc 2007-03 00525040  unit: seg_00520000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525040
//
// 00525040  69c0fe010000         imul eax, eax, 0x1fe
// 00525046  8d8408ff000000       lea eax, [eax + ecx + 0xff]
// 0052504d  99                   cdq 
// 0052504e  03c9                 add ecx, ecx
// 00525050  f7f9                 idiv ecx
// 00525052  c3                   ret 
// library jpeg-6b/jquant1.c (function _largest_input_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
