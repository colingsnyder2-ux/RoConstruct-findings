// roc 2007-03 00525020  unit: seg_00520000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525020
//
// 00525020  69c9ff000000         imul ecx, ecx, 0xff
// 00525026  8bc6                 mov eax, esi
// 00525028  99                   cdq 
// 00525029  2bc2                 sub eax, edx
// 0052502b  d1f8                 sar eax, 1
// 0052502d  03c8                 add ecx, eax
// 0052502f  8bc1                 mov eax, ecx
// 00525031  99                   cdq 
// 00525032  f7fe                 idiv esi
// 00525034  c3                   ret 
// library jpeg-6b/jquant1.c (function _output_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
