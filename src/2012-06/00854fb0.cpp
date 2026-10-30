// from server: 100% by auto
// roc 2012-06 00854fb0  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854fb0
//
// 00854fb0  56                   push esi
// 00854fb1  8b742408             mov esi, dword ptr [esp + 8]
// 00854fb5  807e0600             cmp byte ptr [esi + 6], 0
// 00854fb9  8b4614               mov eax, dword ptr [esi + 0x14]
// 00854fbc  7519                 jne 0x854fd7
// 00854fbe  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00854fc2  6aff                 push -1
// 00854fc4  83c0f0               add eax, -0x10
// 00854fc7  50                   push eax
// 00854fc8  56                   push esi
// 00854fc9  e8a2fdffff           call 0x854d70
// 00854fce  83c40c               add esp, 0xc
// 00854fd1  85c0                 test eax, eax
// 00854fd3  7554                 jne 0x855029
// 00854fd5  eb31                 jmp 0x855008
// 00854fd7  c6460600             mov byte ptr [esi + 6], 0
// 00854fdb  8b4804               mov ecx, dword ptr [eax + 4]
// 00854fde  8b11                 mov edx, dword ptr [ecx]
// 00854fe0  807a0600             cmp byte ptr [edx + 6], 0
// 00854fe4  741d                 je 0x855003
// 00854fe6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00854fea  50                   push eax
// 00854feb  56                   push esi
// 00854fec  e8dff9ffff           call 0x8549d0
// 00854ff1  83c408               add esp, 8
// 00854ff4  85c0                 test eax, eax
// 00854ff6  7410                 je 0x855008
// 00854ff8  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00854ffb  8b5108               mov edx, dword ptr [ecx + 8]
// 00854ffe  895608               mov dword ptr [esi + 8], edx
// 00855001  eb05                 jmp 0x855008
// 00855003  8b00                 mov eax, dword ptr [eax]
// 00855005  89460c               mov dword ptr [esi + 0xc], eax
// 00855008  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0085500b  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 0085500e  b8abaaaa2a           mov eax, 0x2aaaaaab
// 00855013  f7e9                 imul ecx
// 00855015  c1fa02               sar edx, 2
// 00855018  8bca                 mov ecx, edx
// 0085501a  c1e91f               shr ecx, 0x1f
// 0085501d  03ca                 add ecx, edx
// 0085501f  51                   push ecx
// 00855020  56                   push esi
// 00855021  e83af20d00           call 0x934260
// 00855026  83c408               add esp, 8
// 00855029  5e                   pop esi
// 0085502a  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
