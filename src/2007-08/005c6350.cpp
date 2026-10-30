// from server: 100% by auto
// roc 2007-08 005c6350  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6350
//
// 005c6350  56                   push esi
// 005c6351  8b742408             mov esi, dword ptr [esp + 8]
// 005c6355  807e0600             cmp byte ptr [esi + 6], 0
// 005c6359  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c635c  7519                 jne 0x5c6377
// 005c635e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c6362  6aff                 push -1
// 005c6364  83c0f0               add eax, -0x10
// 005c6367  50                   push eax
// 005c6368  56                   push esi
// 005c6369  e8a2fdffff           call 0x5c6110
// 005c636e  83c40c               add esp, 0xc
// 005c6371  85c0                 test eax, eax
// 005c6373  7554                 jne 0x5c63c9
// 005c6375  eb31                 jmp 0x5c63a8
// 005c6377  c6460600             mov byte ptr [esi + 6], 0
// 005c637b  8b4804               mov ecx, dword ptr [eax + 4]
// 005c637e  8b11                 mov edx, dword ptr [ecx]
// 005c6380  807a0600             cmp byte ptr [edx + 6], 0
// 005c6384  741d                 je 0x5c63a3
// 005c6386  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c638a  50                   push eax
// 005c638b  56                   push esi
// 005c638c  e8eff9ffff           call 0x5c5d80
// 005c6391  83c408               add esp, 8
// 005c6394  85c0                 test eax, eax
// 005c6396  7410                 je 0x5c63a8
// 005c6398  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005c639b  8b5108               mov edx, dword ptr [ecx + 8]
// 005c639e  895608               mov dword ptr [esi + 8], edx
// 005c63a1  eb05                 jmp 0x5c63a8
// 005c63a3  8b00                 mov eax, dword ptr [eax]
// 005c63a5  89460c               mov dword ptr [esi + 0xc], eax
// 005c63a8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005c63ab  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 005c63ae  b8abaaaa2a           mov eax, 0x2aaaaaab
// 005c63b3  f7e9                 imul ecx
// 005c63b5  c1fa02               sar edx, 2
// 005c63b8  8bca                 mov ecx, edx
// 005c63ba  c1e91f               shr ecx, 0x1f
// 005c63bd  03ca                 add ecx, edx
// 005c63bf  51                   push ecx
// 005c63c0  56                   push esi
// 005c63c1  e84aa90400           call 0x610d10
// 005c63c6  83c408               add esp, 8
// 005c63c9  5e                   pop esi
// 005c63ca  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
