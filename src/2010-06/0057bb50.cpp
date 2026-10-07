// roc 2010-06 0057bb50  unit: seg_00570000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057bb50
//
// 0057bb50  56                   push esi
// 0057bb51  8b742408             mov esi, dword ptr [esp + 8]
// 0057bb55  68d9000000           push 0xd9
// 0057bb5a  e881f2ffff           call 0x57ade0
// 0057bb5f  83c404               add esp, 4
// 0057bb62  5e                   pop esi
// 0057bb63  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_trailer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
