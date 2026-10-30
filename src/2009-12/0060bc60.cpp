// roc 2009-12 0060bc60  unit: seg_00600000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0060bc60
//
// 0060bc60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0060bc64  8b442404             mov eax, dword ptr [esp + 4]
// 0060bc68  8d4408ff             lea eax, [eax + ecx - 1]
// 0060bc6c  99                   cdq 
// 0060bc6d  f7f9                 idiv ecx
// 0060bc6f  c3                   ret 
// library jpeg-6b/jutils.c (function _jdiv_round_up)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jutils.c
