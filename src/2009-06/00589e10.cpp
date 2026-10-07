// roc 2009-06 00589e10  unit: seg_00580000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00589e10
//
// 00589e10  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00589e14  8b442404             mov eax, dword ptr [esp + 4]
// 00589e18  8d4408ff             lea eax, [eax + ecx - 1]
// 00589e1c  99                   cdq 
// 00589e1d  f7f9                 idiv ecx
// 00589e1f  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
