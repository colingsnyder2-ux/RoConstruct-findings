// from server: 100% by auto
// roc 2007-08 00513920  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513920
//
// 00513920  8b442404             mov eax, dword ptr [esp + 4]
// 00513924  8b4804               mov ecx, dword ptr [eax + 4]
// 00513927  8b11                 mov edx, dword ptr [ecx]
// 00513929  6882000000           push 0x82
// 0051392e  6a00                 push 0
// 00513930  50                   push eax
// 00513931  ffd2                 call edx
// 00513933  83c40c               add esp, 0xc
// 00513936  c6808000000000       mov byte ptr [eax + 0x80], 0
// 0051393d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
