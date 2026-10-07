// roc 2008-06 00622ce0  unit: lua_exception  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622ce0
//
// 00622ce0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00622ce4  8b542404             mov edx, dword ptr [esp + 4]
// 00622ce8  8b4214               mov eax, dword ptr [edx + 0x14]
// 00622ceb  85c9                 test ecx, ecx
// 00622ced  7e23                 jle 0x622d12
// 00622cef  56                   push esi
// 00622cf0  8b7228               mov esi, dword ptr [edx + 0x28]
// 00622cf3  57                   push edi
// 00622cf4  3bc6                 cmp eax, esi
// 00622cf6  7616                 jbe 0x622d0e
// 00622cf8  8b7804               mov edi, dword ptr [eax + 4]
// 00622cfb  8b3f                 mov edi, dword ptr [edi]
// 00622cfd  49                   dec ecx
// 00622cfe  807f0600             cmp byte ptr [edi + 6], 0
// 00622d02  7503                 jne 0x622d07
// 00622d04  2b4814               sub ecx, dword ptr [eax + 0x14]
// 00622d07  83e818               sub eax, 0x18
// 00622d0a  85c9                 test ecx, ecx
// 00622d0c  7fe6                 jg 0x622cf4
// 00622d0e  5f                   pop edi
// 00622d0f  5e                   pop esi
// 00622d10  85c9                 test ecx, ecx
// 00622d12  752b                 jne 0x622d3f
// 00622d14  8b5228               mov edx, dword ptr [edx + 0x28]
// 00622d17  3bc2                 cmp eax, edx
// 00622d19  7639                 jbe 0x622d54
// 00622d1b  2bc2                 sub eax, edx
// 00622d1d  8bd0                 mov edx, eax
// 00622d1f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00622d24  f7ea                 imul edx
// 00622d26  c1fa02               sar edx, 2
// 00622d29  8bc2                 mov eax, edx
// 00622d2b  c1e81f               shr eax, 0x1f
// 00622d2e  03c2                 add eax, edx
// 00622d30  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00622d34  b901000000           mov ecx, 1
// 00622d39  894260               mov dword ptr [edx + 0x60], eax
// 00622d3c  8bc1                 mov eax, ecx
// 00622d3e  c3                   ret 
// 00622d3f  85c9                 test ecx, ecx
// 00622d41  7d11                 jge 0x622d54
// 00622d43  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00622d47  b801000000           mov eax, 1
// 00622d4c  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 00622d53  c3                   ret 
// 00622d54  33c0                 xor eax, eax
// 00622d56  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
