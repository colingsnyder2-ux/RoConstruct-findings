// from server: 100% by auto
// roc 2012-06 006534b0  unit: seg_00650000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006534b0
//
// 006534b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006534b4  8b442404             mov eax, dword ptr [esp + 4]
// 006534b8  8d4408ff             lea eax, [eax + ecx - 1]
// 006534bc  99                   cdq 
// 006534bd  f7f9                 idiv ecx
// 006534bf  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
