// from server: 100% by auto
// roc 2012-06 00653470  unit: seg_00650000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653470
//
// 00653470  8b442404             mov eax, dword ptr [esp + 4]
// 00653474  8b4804               mov ecx, dword ptr [eax + 4]
// 00653477  8b11                 mov edx, dword ptr [ecx]
// 00653479  6882000000           push 0x82
// 0065347e  6a00                 push 0
// 00653480  50                   push eax
// 00653481  ffd2                 call edx
// 00653483  83c40c               add esp, 0xc
// 00653486  c6808000000000       mov byte ptr [eax + 0x80], 0
// 0065348d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
