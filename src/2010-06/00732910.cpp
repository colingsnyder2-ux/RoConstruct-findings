// roc 2010-06 00732910  unit: lua_exception  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00732910
//
// 00732910  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00732914  33c0                 xor eax, eax
// 00732916  83f910               cmp ecx, 0x10
// 00732919  720e                 jb 0x732929
// 0073291b  eb03                 jmp 0x732920
// 0073291d  8d4900               lea ecx, [ecx]
// 00732920  41                   inc ecx
// 00732921  d1e9                 shr ecx, 1
// 00732923  40                   inc eax
// 00732924  83f910               cmp ecx, 0x10
// 00732927  73f7                 jae 0x732920
// 00732929  83f908               cmp ecx, 8
// 0073292c  7303                 jae 0x732931
// 0073292e  8bc1                 mov eax, ecx
// 00732930  c3                   ret 
// 00732931  8d04c508000000       lea eax, [eax*8 + 8]
// 00732938  83c1f8               add ecx, -8
// 0073293b  0bc1                 or eax, ecx
// 0073293d  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_int2fb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
