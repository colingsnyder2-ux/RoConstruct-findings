// roc 2008-06 00530370  unit: seg_00530000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00530370
//
// 00530370  56                   push esi
// 00530371  8b742408             mov esi, dword ptr [esp + 8]
// 00530375  68d9000000           push 0xd9
// 0053037a  e881f2ffff           call 0x52f600
// 0053037f  83c404               add esp, 4
// 00530382  5e                   pop esi
// 00530383  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_trailer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
