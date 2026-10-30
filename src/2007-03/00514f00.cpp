// roc 2007-03 00514f00  unit: seg_00510000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00514f00
//
// 00514f00  8b442404             mov eax, dword ptr [esp + 4]
// 00514f04  8b4804               mov ecx, dword ptr [eax + 4]
// 00514f07  8b11                 mov edx, dword ptr [ecx]
// 00514f09  6882000000           push 0x82
// 00514f0e  6a00                 push 0
// 00514f10  50                   push eax
// 00514f11  ffd2                 call edx
// 00514f13  83c40c               add esp, 0xc
// 00514f16  c6808000000000       mov byte ptr [eax + 0x80], 0
// 00514f1d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
