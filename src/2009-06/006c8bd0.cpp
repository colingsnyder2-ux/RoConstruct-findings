// roc 2009-06 006c8bd0  unit: seg_006c0000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8bd0
//
// 006c8bd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c8bd4  33c0                 xor eax, eax
// 006c8bd6  83f910               cmp ecx, 0x10
// 006c8bd9  720e                 jb 0x6c8be9
// 006c8bdb  eb03                 jmp 0x6c8be0
// 006c8bdd  8d4900               lea ecx, [ecx]
// 006c8be0  41                   inc ecx
// 006c8be1  d1e9                 shr ecx, 1
// 006c8be3  40                   inc eax
// 006c8be4  83f910               cmp ecx, 0x10
// 006c8be7  73f7                 jae 0x6c8be0
// 006c8be9  83f908               cmp ecx, 8
// 006c8bec  7303                 jae 0x6c8bf1
// 006c8bee  8bc1                 mov eax, ecx
// 006c8bf0  c3                   ret 
// 006c8bf1  8d04c508000000       lea eax, [eax*8 + 8]
// 006c8bf8  83c1f8               add ecx, -8
// 006c8bfb  0bc1                 or eax, ecx
// 006c8bfd  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_int2fb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
