// roc 2008-06 0051b700  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051b700
//
// 0051b700  8b442404             mov eax, dword ptr [esp + 4]
// 0051b704  8b4804               mov ecx, dword ptr [eax + 4]
// 0051b707  8b11                 mov edx, dword ptr [ecx]
// 0051b709  6812010000           push 0x112
// 0051b70e  6a00                 push 0
// 0051b710  50                   push eax
// 0051b711  ffd2                 call edx
// 0051b713  83c40c               add esp, 0xc
// 0051b716  c6801101000000       mov byte ptr [eax + 0x111], 0
// 0051b71d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
