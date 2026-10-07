// roc 2008-06 006225f0  unit: lua_exception  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006225f0
//
// 006225f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006225f4  33c0                 xor eax, eax
// 006225f6  83f910               cmp ecx, 0x10
// 006225f9  720e                 jb 0x622609
// 006225fb  eb03                 jmp 0x622600
// 006225fd  8d4900               lea ecx, [ecx]
// 00622600  41                   inc ecx
// 00622601  d1e9                 shr ecx, 1
// 00622603  40                   inc eax
// 00622604  83f910               cmp ecx, 0x10
// 00622607  73f7                 jae 0x622600
// 00622609  83f908               cmp ecx, 8
// 0062260c  7303                 jae 0x622611
// 0062260e  8bc1                 mov eax, ecx
// 00622610  c3                   ret 
// 00622611  8d04c508000000       lea eax, [eax*8 + 8]
// 00622618  83c1f8               add ecx, -8
// 0062261b  0bc1                 or eax, ecx
// 0062261d  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_int2fb)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
