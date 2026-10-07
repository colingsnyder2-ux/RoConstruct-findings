// roc 2010-06 0056d340  unit: seg_00560000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0056d340
//
// 0056d340  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d344  8b442404             mov eax, dword ptr [esp + 4]
// 0056d348  8d4408ff             lea eax, [eax + ecx - 1]
// 0056d34c  99                   cdq 
// 0056d34d  f7f9                 idiv ecx
// 0056d34f  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
