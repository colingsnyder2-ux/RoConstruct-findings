// roc 2007-08 0052a350  unit: seg_00520000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052a350
//
// 0052a350  69c9ff000000         imul ecx, ecx, 0xff
// 0052a356  8bc6                 mov eax, esi
// 0052a358  99                   cdq 
// 0052a359  2bc2                 sub eax, edx
// 0052a35b  d1f8                 sar eax, 1
// 0052a35d  03c8                 add ecx, eax
// 0052a35f  8bc1                 mov eax, ecx
// 0052a361  99                   cdq 
// 0052a362  f7fe                 idiv esi
// 0052a364  c3                   ret 
// library jpeg-6b/jquant1.c (function _output_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
