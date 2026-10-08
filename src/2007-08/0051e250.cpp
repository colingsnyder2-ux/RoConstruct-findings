// from server: 100% by auto
// roc 2007-08 0051e250  unit: seg_00510000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0051e250
//
// 0051e250  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0051e254  8b442404             mov eax, dword ptr [esp + 4]
// 0051e258  8d4408ff             lea eax, [eax + ecx - 1]
// 0051e25c  99                   cdq 
// 0051e25d  f7f9                 idiv ecx
// 0051e25f  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
