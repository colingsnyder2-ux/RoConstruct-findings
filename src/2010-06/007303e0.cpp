// roc 2010-06 007303e0  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007303e0
//
// 007303e0  56                   push esi
// 007303e1  8b742408             mov esi, dword ptr [esp + 8]
// 007303e5  807e0600             cmp byte ptr [esi + 6], 0
// 007303e9  8b4614               mov eax, dword ptr [esi + 0x14]
// 007303ec  7519                 jne 0x730407
// 007303ee  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007303f2  6aff                 push -1
// 007303f4  83c0f0               add eax, -0x10
// 007303f7  50                   push eax
// 007303f8  56                   push esi
// 007303f9  e8a2fdffff           call 0x7301a0
// 007303fe  83c40c               add esp, 0xc
// 00730401  85c0                 test eax, eax
// 00730403  7554                 jne 0x730459
// 00730405  eb31                 jmp 0x730438
// 00730407  c6460600             mov byte ptr [esi + 6], 0
// 0073040b  8b4804               mov ecx, dword ptr [eax + 4]
// 0073040e  8b11                 mov edx, dword ptr [ecx]
// 00730410  807a0600             cmp byte ptr [edx + 6], 0
// 00730414  741d                 je 0x730433
// 00730416  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0073041a  50                   push eax
// 0073041b  56                   push esi
// 0073041c  e8dff9ffff           call 0x72fe00
// 00730421  83c408               add esp, 8
// 00730424  85c0                 test eax, eax
// 00730426  7410                 je 0x730438
// 00730428  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0073042b  8b5108               mov edx, dword ptr [ecx + 8]
// 0073042e  895608               mov dword ptr [esi + 8], edx
// 00730431  eb05                 jmp 0x730438
// 00730433  8b00                 mov eax, dword ptr [eax]
// 00730435  89460c               mov dword ptr [esi + 0xc], eax
// 00730438  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0073043b  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 0073043e  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00730443  f7e9                 imul ecx
// 00730445  c1fa02               sar edx, 2
// 00730448  8bca                 mov ecx, edx
// 0073044a  c1e91f               shr ecx, 0x1f
// 0073044d  03ca                 add ecx, edx
// 0073044f  51                   push ecx
// 00730450  56                   push esi
// 00730451  e83ab90400           call 0x77bd90
// 00730456  83c408               add esp, 8
// 00730459  5e                   pop esi
// 0073045a  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
