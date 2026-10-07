// roc 2011-06 00567d60  unit: seg_00560000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567d60
//
// 00567d60  8b442404             mov eax, dword ptr [esp + 4]
// 00567d64  8b4804               mov ecx, dword ptr [eax + 4]
// 00567d67  8b11                 mov edx, dword ptr [ecx]
// 00567d69  6882000000           push 0x82
// 00567d6e  6a00                 push 0
// 00567d70  50                   push eax
// 00567d71  ffd2                 call edx
// 00567d73  83c40c               add esp, 0xc
// 00567d76  c6808000000000       mov byte ptr [eax + 0x80], 0
// 00567d7d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
