// roc 2012-06 00653490  unit: seg_00650000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653490
//
// 00653490  8b442404             mov eax, dword ptr [esp + 4]
// 00653494  8b4804               mov ecx, dword ptr [eax + 4]
// 00653497  8b11                 mov edx, dword ptr [ecx]
// 00653499  6812010000           push 0x112
// 0065349e  6a00                 push 0
// 006534a0  50                   push eax
// 006534a1  ffd2                 call edx
// 006534a3  83c40c               add esp, 0xc
// 006534a6  c6801101000000       mov byte ptr [eax + 0x111], 0
// 006534ad  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
