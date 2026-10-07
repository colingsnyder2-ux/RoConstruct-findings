// roc 2010-06 005627f0  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005627f0
//
// 005627f0  8b442404             mov eax, dword ptr [esp + 4]
// 005627f4  8b4804               mov ecx, dword ptr [eax + 4]
// 005627f7  8b11                 mov edx, dword ptr [ecx]
// 005627f9  6812010000           push 0x112
// 005627fe  6a00                 push 0
// 00562800  50                   push eax
// 00562801  ffd2                 call edx
// 00562803  83c40c               add esp, 0xc
// 00562806  c6801101000000       mov byte ptr [eax + 0x111], 0
// 0056280d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
