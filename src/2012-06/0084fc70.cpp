// roc 2012-06 0084fc70  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0084fc70
//
// 0084fc70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084fc74  33c0                 xor eax, eax
// 0084fc76  83f910               cmp ecx, 0x10
// 0084fc79  720e                 jb 0x84fc89
// 0084fc7b  eb03                 jmp 0x84fc80
// 0084fc7d  8d4900               lea ecx, [ecx]
// 0084fc80  41                   inc ecx
// 0084fc81  d1e9                 shr ecx, 1
// 0084fc83  40                   inc eax
// 0084fc84  83f910               cmp ecx, 0x10
// 0084fc87  73f7                 jae 0x84fc80
// 0084fc89  83f908               cmp ecx, 8
// 0084fc8c  7303                 jae 0x84fc91
// 0084fc8e  8bc1                 mov eax, ecx
// 0084fc90  c3                   ret 
// 0084fc91  8d04c508000000       lea eax, [eax*8 + 8]
// 0084fc98  83c1f8               add ecx, -8
// 0084fc9b  0bc1                 or eax, ecx
// 0084fc9d  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_int2fb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
