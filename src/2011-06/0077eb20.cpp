// from server: 100% by auto
// roc 2011-06 0077eb20  unit: lua_exception  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077eb20
//
// 0077eb20  56                   push esi
// 0077eb21  8b742408             mov esi, dword ptr [esp + 8]
// 0077eb25  807e0600             cmp byte ptr [esi + 6], 0
// 0077eb29  8b4614               mov eax, dword ptr [esi + 0x14]
// 0077eb2c  7519                 jne 0x77eb47
// 0077eb2e  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077eb32  6aff                 push -1
// 0077eb34  83c0f0               add eax, -0x10
// 0077eb37  50                   push eax
// 0077eb38  56                   push esi
// 0077eb39  e8a2fdffff           call 0x77e8e0
// 0077eb3e  83c40c               add esp, 0xc
// 0077eb41  85c0                 test eax, eax
// 0077eb43  7554                 jne 0x77eb99
// 0077eb45  eb31                 jmp 0x77eb78
// 0077eb47  c6460600             mov byte ptr [esi + 6], 0
// 0077eb4b  8b4804               mov ecx, dword ptr [eax + 4]
// 0077eb4e  8b11                 mov edx, dword ptr [ecx]
// 0077eb50  807a0600             cmp byte ptr [edx + 6], 0
// 0077eb54  741d                 je 0x77eb73
// 0077eb56  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0077eb5a  50                   push eax
// 0077eb5b  56                   push esi
// 0077eb5c  e8dff9ffff           call 0x77e540
// 0077eb61  83c408               add esp, 8
// 0077eb64  85c0                 test eax, eax
// 0077eb66  7410                 je 0x77eb78
// 0077eb68  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077eb6b  8b5108               mov edx, dword ptr [ecx + 8]
// 0077eb6e  895608               mov dword ptr [esi + 8], edx
// 0077eb71  eb05                 jmp 0x77eb78
// 0077eb73  8b00                 mov eax, dword ptr [eax]
// 0077eb75  89460c               mov dword ptr [esi + 0xc], eax
// 0077eb78  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0077eb7b  2b4e28               sub ecx, dword ptr [esi + 0x28]
// 0077eb7e  b8abaaaa2a           mov eax, 0x2aaaaaab
// 0077eb83  f7e9                 imul ecx
// 0077eb85  c1fa02               sar edx, 2
// 0077eb88  8bca                 mov ecx, edx
// 0077eb8a  c1e91f               shr ecx, 0x1f
// 0077eb8d  03ca                 add ecx, edx
// 0077eb8f  51                   push ecx
// 0077eb90  56                   push esi
// 0077eb91  e8ba950500           call 0x7d8150
// 0077eb96  83c408               add esp, 8
// 0077eb99  5e                   pop esi
// 0077eb9a  c3                   ret 
// library lua-5.1.4/ldo.c (function _resume)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
