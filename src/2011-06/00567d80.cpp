// from server: 100% by auto
// roc 2011-06 00567d80  unit: seg_00560000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00567d80
//
// 00567d80  8b442404             mov eax, dword ptr [esp + 4]
// 00567d84  8b4804               mov ecx, dword ptr [eax + 4]
// 00567d87  8b11                 mov edx, dword ptr [ecx]
// 00567d89  6812010000           push 0x112
// 00567d8e  6a00                 push 0
// 00567d90  50                   push eax
// 00567d91  ffd2                 call edx
// 00567d93  83c40c               add esp, 0xc
// 00567d96  c6801101000000       mov byte ptr [eax + 0x111], 0
// 00567d9d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
