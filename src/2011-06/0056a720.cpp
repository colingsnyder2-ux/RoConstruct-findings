// from server: 100% by auto
// roc 2011-06 0056a720  unit: seg_00560000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0056a720
//
// 0056a720  56                   push esi
// 0056a721  8b742408             mov esi, dword ptr [esp + 8]
// 0056a725  68d9000000           push 0xd9
// 0056a72a  e881f2ffff           call 0x5699b0
// 0056a72f  83c404               add esp, 4
// 0056a732  5e                   pop esi
// 0056a733  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_trailer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
