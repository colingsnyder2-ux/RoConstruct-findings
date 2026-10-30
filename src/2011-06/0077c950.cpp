// from server: 100% by auto
// roc 2011-06 0077c950  unit: seg_00770000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077c950
//
// 0077c950  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0077c954  33c0                 xor eax, eax
// 0077c956  83f910               cmp ecx, 0x10
// 0077c959  720e                 jb 0x77c969
// 0077c95b  eb03                 jmp 0x77c960
// 0077c95d  8d4900               lea ecx, [ecx]
// 0077c960  41                   inc ecx
// 0077c961  d1e9                 shr ecx, 1
// 0077c963  40                   inc eax
// 0077c964  83f910               cmp ecx, 0x10
// 0077c967  73f7                 jae 0x77c960
// 0077c969  83f908               cmp ecx, 8
// 0077c96c  7303                 jae 0x77c971
// 0077c96e  8bc1                 mov eax, ecx
// 0077c970  c3                   ret 
// 0077c971  8d04c508000000       lea eax, [eax*8 + 8]
// 0077c978  83c1f8               add ecx, -8
// 0077c97b  0bc1                 or eax, ecx
// 0077c97d  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_int2fb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
