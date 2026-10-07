// roc 2008-06 0051b6e0  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b6e0
//
// 0051b6e0  8b442404             mov eax, dword ptr [esp + 4]
// 0051b6e4  8b4804               mov ecx, dword ptr [eax + 4]
// 0051b6e7  8b11                 mov edx, dword ptr [ecx]
// 0051b6e9  6882000000           push 0x82
// 0051b6ee  6a00                 push 0
// 0051b6f0  50                   push eax
// 0051b6f1  ffd2                 call edx
// 0051b6f3  83c40c               add esp, 0xc
// 0051b6f6  c6808000000000       mov byte ptr [eax + 0x80], 0
// 0051b6fd  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
