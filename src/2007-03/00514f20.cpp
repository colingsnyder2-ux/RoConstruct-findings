// roc 2007-03 00514f20  unit: seg_00510000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514f20
//
// 00514f20  8b442404             mov eax, dword ptr [esp + 4]
// 00514f24  8b4804               mov ecx, dword ptr [eax + 4]
// 00514f27  8b11                 mov edx, dword ptr [ecx]
// 00514f29  6812010000           push 0x112
// 00514f2e  6a00                 push 0
// 00514f30  50                   push eax
// 00514f31  ffd2                 call edx
// 00514f33  83c40c               add esp, 0xc
// 00514f36  c6801101000000       mov byte ptr [eax + 0x111], 0
// 00514f3d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
