// from server: 100% by auto
// roc 2008-06 00525b00  unit: seg_00520000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00525b00
//
// 00525b00  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00525b04  8b442404             mov eax, dword ptr [esp + 4]
// 00525b08  8d4408ff             lea eax, [eax + ecx - 1]
// 00525b0c  99                   cdq 
// 00525b0d  f7f9                 idiv ecx
// 00525b0f  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
