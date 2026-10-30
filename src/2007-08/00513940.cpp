// from server: 100% by auto
// roc 2007-08 00513940  unit: G3D::_internal::DialogTemplate  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00513940
//
// 00513940  8b442404             mov eax, dword ptr [esp + 4]
// 00513944  8b4804               mov ecx, dword ptr [eax + 4]
// 00513947  8b11                 mov edx, dword ptr [ecx]
// 00513949  6812010000           push 0x112
// 0051394e  6a00                 push 0
// 00513950  50                   push eax
// 00513951  ffd2                 call edx
// 00513953  83c40c               add esp, 0xc
// 00513956  c6801101000000       mov byte ptr [eax + 0x111], 0
// 0051395d  c3                   ret 
// library jpeg-6b/jcomapi.c (function _jpeg_alloc_huff_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcomapi.c
