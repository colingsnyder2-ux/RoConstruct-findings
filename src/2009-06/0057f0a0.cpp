// roc 2009-06 0057f0a0  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057f0a0
//
// 0057f0a0  8b442404             mov eax, dword ptr [esp + 4]
// 0057f0a4  8b4804               mov ecx, dword ptr [eax + 4]
// 0057f0a7  8b11                 mov edx, dword ptr [ecx]
// 0057f0a9  6812010000           push 0x112
// 0057f0ae  6a00                 push 0
// 0057f0b0  50                   push eax
// 0057f0b1  ffd2                 call edx
// 0057f0b3  83c40c               add esp, 0xc
// 0057f0b6  c6801101000000       mov byte ptr [eax + 0x111], 0
// 0057f0bd  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
