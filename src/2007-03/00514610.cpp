// roc 2007-03 00514610  unit: seg_00510000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514610
//
// 00514610  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00514614  8b442404             mov eax, dword ptr [esp + 4]
// 00514618  8d4408ff             lea eax, [eax + ecx - 1]
// 0051461c  99                   cdq 
// 0051461d  f7f9                 idiv ecx
// 0051461f  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
