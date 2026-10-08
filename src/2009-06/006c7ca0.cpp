// from server: 100% by auto
// roc 2009-06 006c7ca0  unit: seg_006c0000  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7ca0
//
// 006c7ca0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006c7ca4  8b542404             mov edx, dword ptr [esp + 4]
// 006c7ca8  8b4214               mov eax, dword ptr [edx + 0x14]
// 006c7cab  85c9                 test ecx, ecx
// 006c7cad  7e23                 jle 0x6c7cd2
// 006c7caf  56                   push esi
// 006c7cb0  8b7228               mov esi, dword ptr [edx + 0x28]
// 006c7cb3  57                   push edi
// 006c7cb4  3bc6                 cmp eax, esi
// 006c7cb6  7616                 jbe 0x6c7cce
// 006c7cb8  8b7804               mov edi, dword ptr [eax + 4]
// 006c7cbb  8b3f                 mov edi, dword ptr [edi]
// 006c7cbd  49                   dec ecx
// 006c7cbe  807f0600             cmp byte ptr [edi + 6], 0
// 006c7cc2  7503                 jne 0x6c7cc7
// 006c7cc4  2b4814               sub ecx, dword ptr [eax + 0x14]
// 006c7cc7  83e818               sub eax, 0x18
// 006c7cca  85c9                 test ecx, ecx
// 006c7ccc  7fe6                 jg 0x6c7cb4
// 006c7cce  5f                   pop edi
// 006c7ccf  5e                   pop esi
// 006c7cd0  85c9                 test ecx, ecx
// 006c7cd2  752b                 jne 0x6c7cff
// 006c7cd4  8b5228               mov edx, dword ptr [edx + 0x28]
// 006c7cd7  3bc2                 cmp eax, edx
// 006c7cd9  7639                 jbe 0x6c7d14
// 006c7cdb  2bc2                 sub eax, edx
// 006c7cdd  8bd0                 mov edx, eax
// 006c7cdf  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006c7ce4  f7ea                 imul edx
// 006c7ce6  c1fa02               sar edx, 2
// 006c7ce9  8bc2                 mov eax, edx
// 006c7ceb  c1e81f               shr eax, 0x1f
// 006c7cee  03c2                 add eax, edx
// 006c7cf0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c7cf4  b901000000           mov ecx, 1
// 006c7cf9  894260               mov dword ptr [edx + 0x60], eax
// 006c7cfc  8bc1                 mov eax, ecx
// 006c7cfe  c3                   ret 
// 006c7cff  85c9                 test ecx, ecx
// 006c7d01  7d11                 jge 0x6c7d14
// 006c7d03  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c7d07  b801000000           mov eax, 1
// 006c7d0c  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 006c7d13  c3                   ret 
// 006c7d14  33c0                 xor eax, eax
// 006c7d16  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
