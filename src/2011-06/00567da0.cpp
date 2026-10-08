// from server: 100% by auto
// roc 2011-06 00567da0  unit: seg_00560000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567da0
//
// 00567da0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00567da4  8b442404             mov eax, dword ptr [esp + 4]
// 00567da8  8d4408ff             lea eax, [eax + ecx - 1]
// 00567dac  99                   cdq 
// 00567dad  f7f9                 idiv ecx
// 00567daf  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
