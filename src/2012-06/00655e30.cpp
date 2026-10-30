// from server: 100% by auto
// roc 2012-06 00655e30  unit: seg_00650000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655e30
//
// 00655e30  56                   push esi
// 00655e31  8b742408             mov esi, dword ptr [esp + 8]
// 00655e35  68d9000000           push 0xd9
// 00655e3a  e881f2ffff           call 0x6550c0
// 00655e3f  83c404               add esp, 4
// 00655e42  5e                   pop esi
// 00655e43  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_trailer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
