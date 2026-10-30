// from server: 100% by auto
// roc 2007-08 005c65c0  unit: lua_exception  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c65c0
//
// 005c65c0  8b4804               mov ecx, dword ptr [eax + 4]
// 005c65c3  83790806             cmp dword ptr [ecx + 8], 6
// 005c65c7  7528                 jne 0x5c65f1
// 005c65c9  56                   push esi
// 005c65ca  8b31                 mov esi, dword ptr [ecx]
// 005c65cc  807e0600             cmp byte ptr [esi + 6], 0
// 005c65d0  5e                   pop esi
// 005c65d1  751e                 jne 0x5c65f1
// 005c65d3  3b4214               cmp eax, dword ptr [edx + 0x14]
// 005c65d6  7506                 jne 0x5c65de
// 005c65d8  8b5218               mov edx, dword ptr [edx + 0x18]
// 005c65db  89500c               mov dword ptr [eax + 0xc], edx
// 005c65de  8b09                 mov ecx, dword ptr [ecx]
// 005c65e0  8b400c               mov eax, dword ptr [eax + 0xc]
// 005c65e3  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005c65e6  2b410c               sub eax, dword ptr [ecx + 0xc]
// 005c65e9  c1f802               sar eax, 2
// 005c65ec  83e801               sub eax, 1
// 005c65ef  7904                 jns 0x5c65f5
// 005c65f1  83c8ff               or eax, 0xffffffff
// 005c65f4  c3                   ret 
// 005c65f5  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 005c65f8  85c9                 test ecx, ecx
// 005c65fa  7404                 je 0x5c6600
// 005c65fc  8b0481               mov eax, dword ptr [ecx + eax*4]
// 005c65ff  c3                   ret 
// 005c6600  33c0                 xor eax, eax
// 005c6602  c3                   ret 
// library lua-5.1.4/ldebug.c (function _currentline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
