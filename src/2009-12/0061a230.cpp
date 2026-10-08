// roc 2009-12 0061a230  unit: seg_00610000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a230
//
// 0061a230  56                   push esi
// 0061a231  8b742408             mov esi, dword ptr [esp + 8]
// 0061a235  68d9000000           push 0xd9
// 0061a23a  e881f2ffff           call 0x6194c0
// 0061a23f  83c404               add esp, 4
// 0061a242  5e                   pop esi
// 0061a243  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_file_trailer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
