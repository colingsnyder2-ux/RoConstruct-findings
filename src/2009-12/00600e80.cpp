// roc 2009-12 00600e80  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600e80
//
// 00600e80  8b442404             mov eax, dword ptr [esp + 4]
// 00600e84  8b4804               mov ecx, dword ptr [eax + 4]
// 00600e87  8b11                 mov edx, dword ptr [ecx]
// 00600e89  6812010000           push 0x112
// 00600e8e  6a00                 push 0
// 00600e90  50                   push eax
// 00600e91  ffd2                 call edx
// 00600e93  83c40c               add esp, 0xc
// 00600e96  c6801101000000       mov byte ptr [eax + 0x111], 0
// 00600e9d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
