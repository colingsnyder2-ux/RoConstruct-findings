// roc 2009-12 00600e60  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600e60
//
// 00600e60  8b442404             mov eax, dword ptr [esp + 4]
// 00600e64  8b4804               mov ecx, dword ptr [eax + 4]
// 00600e67  8b11                 mov edx, dword ptr [ecx]
// 00600e69  6882000000           push 0x82
// 00600e6e  6a00                 push 0
// 00600e70  50                   push eax
// 00600e71  ffd2                 call edx
// 00600e73  83c40c               add esp, 0xc
// 00600e76  c6808000000000       mov byte ptr [eax + 0x80], 0
// 00600e7d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
