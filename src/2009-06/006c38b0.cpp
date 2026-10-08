// from server: 100% by auto
// roc 2009-06 006c38b0  unit: lua_exception  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c38b0
//
// 006c38b0  68c0000000           push 0xc0
// 006c38b5  6a00                 push 0
// 006c38b7  6a00                 push 0
// 006c38b9  57                   push edi
// 006c38ba  e8a19e0200           call 0x6ed760
// 006c38bf  68d0020000           push 0x2d0
// 006c38c4  6a00                 push 0
// 006c38c6  894628               mov dword ptr [esi + 0x28], eax
// 006c38c9  894614               mov dword ptr [esi + 0x14], eax
// 006c38cc  05a8000000           add eax, 0xa8
// 006c38d1  6a00                 push 0
// 006c38d3  57                   push edi
// 006c38d4  c7463008000000       mov dword ptr [esi + 0x30], 8
// 006c38db  894624               mov dword ptr [esi + 0x24], eax
// 006c38de  e87d9e0200           call 0x6ed760
// 006c38e3  8b5614               mov edx, dword ptr [esi + 0x14]
// 006c38e6  894608               mov dword ptr [esi + 8], eax
// 006c38e9  894620               mov dword ptr [esi + 0x20], eax
// 006c38ec  8d8870020000         lea ecx, [eax + 0x270]
// 006c38f2  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006c38f5  c7462c2d000000       mov dword ptr [esi + 0x2c], 0x2d
// 006c38fc  894204               mov dword ptr [edx + 4], eax
// 006c38ff  8b4608               mov eax, dword ptr [esi + 8]
// 006c3902  c7400800000000       mov dword ptr [eax + 8], 0
// 006c3909  83460810             add dword ptr [esi + 8], 0x10
// 006c390d  8b4608               mov eax, dword ptr [esi + 8]
// 006c3910  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006c3913  8901                 mov dword ptr [ecx], eax
// 006c3915  8b4614               mov eax, dword ptr [esi + 0x14]
// 006c3918  8b4e08               mov ecx, dword ptr [esi + 8]
// 006c391b  8b10                 mov edx, dword ptr [eax]
// 006c391d  81c140010000         add ecx, 0x140
// 006c3923  89560c               mov dword ptr [esi + 0xc], edx
// 006c3926  83c420               add esp, 0x20
// 006c3929  894808               mov dword ptr [eax + 8], ecx
// 006c392c  c3                   ret 
// library lua-5.1.4/lstate.c (function _stack_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
