// roc 2007-08 0060e9f0  unit: RBX::Ball  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060e9f0
//
// 0060e9f0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060e9f4  33c0                 xor eax, eax
// 0060e9f6  83f910               cmp ecx, 0x10
// 0060e9f9  7212                 jb 0x60ea0d
// 0060e9fb  eb03                 jmp 0x60ea00
// 0060e9fd  8d4900               lea ecx, [ecx]
// 0060ea00  83c101               add ecx, 1
// 0060ea03  d1e9                 shr ecx, 1
// 0060ea05  83c001               add eax, 1
// 0060ea08  83f910               cmp ecx, 0x10
// 0060ea0b  73f3                 jae 0x60ea00
// 0060ea0d  83f908               cmp ecx, 8
// 0060ea10  7303                 jae 0x60ea15
// 0060ea12  8bc1                 mov eax, ecx
// 0060ea14  c3                   ret 
// 0060ea15  8d04c508000000       lea eax, [eax*8 + 8]
// 0060ea1c  83c1f8               add ecx, -8
// 0060ea1f  0bc1                 or eax, ecx
// 0060ea21  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_int2fb)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
