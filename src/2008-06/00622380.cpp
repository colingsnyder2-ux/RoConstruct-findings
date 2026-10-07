// roc 2008-06 00622380  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622380
//
// 00622380  56                   push esi
// 00622381  8b742408             mov esi, dword ptr [esp + 8]
// 00622385  807e0600             cmp byte ptr [esi + 6], 0
// 00622389  8b4614               mov eax, dword ptr [esi + 0x14]
// 0062238c  7519                 jne 0x6223a7
// 0062238e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00622392  6aff                 push -1
// 00622394  83c0f0               add eax, -0x10
// 00622397  50                   push eax
// 00622398  56                   push esi
// 00622399  e8a2fdffff           call 0x622140
// 0062239e  83c40c               add esp, 0xc
// 006223a1  85c0                 test eax, eax
// 006223a3  7554                 jne 0x6223f9
// 006223a5  eb31                 jmp 0x6223d8
// 006223a7  c6460600             mov byte ptr [esi + 6], 0
// 006223ab  8b4804               mov ecx, dword ptr [eax + 4]
// 006223ae  8b11                 mov edx, dword ptr [ecx]
// 006223b0  807a0600             cmp byte ptr [edx + 6], 0
// 006223b4  741d                 je 0x6223d3
// 006223b6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006223ba  50                   push eax
// 006223bb  56                   push esi
// 006223bc  e8eff9ffff           call 0x621db0
// 006223c1  83c408               add esp, 8
// 006223c4  85c0                 test eax, eax
// 006223c6  7410                 je 0x6223d8
// 006223c8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006223cb  8b5108               mov edx, dword ptr [ecx + 8]
// 006223ce  895608               mov dword ptr [esi + 8], edx
// 006223d1  eb05                 jmp 0x6223d8
// 006223d3  8b00                 mov eax, dword ptr [eax]
// 006223d5  89460c               mov dword ptr [esi + 0xc], eax
// 006223d8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006223db  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 006223de  b8abaaaa2a           mov eax, 0x2aaaaaab
// 006223e3  f7e9                 imul ecx
// 006223e5  c1fa02               sar edx, 2
// 006223e8  8bca                 mov ecx, edx
// 006223ea  c1e91f               shr ecx, 0x1f
// 006223ed  03ca                 add ecx, edx
// 006223ef  51                   push ecx
// 006223f0  56                   push esi
// 006223f1  e8caae0300           call 0x65d2c0
// 006223f6  83c408               add esp, 8
// 006223f9  5e                   pop esi
// 006223fa  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
