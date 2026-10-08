// from server: 100% by auto
// roc 2009-06 0057f080  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057f080
//
// 0057f080  8b442404             mov eax, dword ptr [esp + 4]
// 0057f084  8b4804               mov ecx, dword ptr [eax + 4]
// 0057f087  8b11                 mov edx, dword ptr [ecx]
// 0057f089  6882000000           push 0x82
// 0057f08e  6a00                 push 0
// 0057f090  50                   push eax
// 0057f091  ffd2                 call edx
// 0057f093  83c40c               add esp, 0xc
// 0057f096  c6808000000000       mov byte ptr [eax + 0x80], 0
// 0057f09d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_quant_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
