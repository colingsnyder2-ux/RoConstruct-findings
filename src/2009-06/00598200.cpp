// from server: 100% by auto
// roc 2009-06 00598200  unit: seg_00590000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00598200
//
// 00598200  56                   push esi
// 00598201  8b742408             mov esi, dword ptr [esp + 8]
// 00598205  68d9000000           push 0xd9
// 0059820a  e881f2ffff           call 0x597490
// 0059820f  83c404               add esp, 4
// 00598212  5e                   pop esi
// 00598213  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_trailer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
