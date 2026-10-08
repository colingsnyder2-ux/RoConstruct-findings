// from server: 100% by auto
// roc 2010-06 005627d0  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005627d0
//
// 005627d0  8b442404             mov eax, dword ptr [esp + 4]
// 005627d4  8b4804               mov ecx, dword ptr [eax + 4]
// 005627d7  8b11                 mov edx, dword ptr [ecx]
// 005627d9  6882000000           push 0x82
// 005627de  6a00                 push 0
// 005627e0  50                   push eax
// 005627e1  ffd2                 call edx
// 005627e3  83c40c               add esp, 0xc
// 005627e6  c6808000000000       mov byte ptr [eax + 0x80], 0
// 005627ed  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
