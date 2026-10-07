// roc 2010-06 00733000  unit: lua_exception  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733000
//
// 00733000  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00733004  8b542404             mov edx, dword ptr [esp + 4]
// 00733008  8b4214               mov eax, dword ptr [edx + 0x14]
// 0073300b  85c9                 test ecx, ecx
// 0073300d  7e23                 jle 0x733032
// 0073300f  56                   push esi
// 00733010  8b7228               mov esi, dword ptr [edx + 0x28]
// 00733013  57                   push edi
// 00733014  3bc6                 cmp eax, esi
// 00733016  7616                 jbe 0x73302e
// 00733018  8b7804               mov edi, dword ptr [eax + 4]
// 0073301b  8b3f                 mov edi, dword ptr [edi]
// 0073301d  49                   dec ecx
// 0073301e  807f0600             cmp byte ptr [edi + 6], 0
// 00733022  7503                 jne 0x733027
// 00733024  2b4814               sub ecx, dword ptr [eax + 0x14]
// 00733027  83e818               sub eax, 0x18
// 0073302a  85c9                 test ecx, ecx
// 0073302c  7fe6                 jg 0x733014
// 0073302e  5f                   pop edi
// 0073302f  5e                   pop esi
// 00733030  85c9                 test ecx, ecx
// 00733032  752b                 jne 0x73305f
// 00733034  8b5228               mov edx, dword ptr [edx + 0x28]
// 00733037  3bc2                 cmp eax, edx
// 00733039  7639                 jbe 0x733074
// 0073303b  2bc2                 sub eax, edx
// 0073303d  8bd0                 mov edx, eax
// 0073303f  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00733044  f7ea                 imul edx
// 00733046  c1fa02               sar edx, 2
// 00733049  8bc2                 mov eax, edx
// 0073304b  c1e81f               shr eax, 0x1f
// 0073304e  03c2                 add eax, edx
// 00733050  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00733054  b901000000           mov ecx, 1
// 00733059  894260               mov dword ptr [edx + 0x60], eax
// 0073305c  8bc1                 mov eax, ecx
// 0073305e  c3                   ret 
// 0073305f  85c9                 test ecx, ecx
// 00733061  7d11                 jge 0x733074
// 00733063  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00733067  b801000000           mov eax, 1
// 0073306c  c7416000000000       mov dword ptr [ecx + 0x60], 0
// 00733073  c3                   ret 
// 00733074  33c0                 xor eax, eax
// 00733076  c3                   ret 
// library lua-5.1.4/ldebug.c (function _lua_getstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
