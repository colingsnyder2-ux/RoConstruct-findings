// roc 2012-06 00853d30  unit: RBX::LuaStatsItem  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00853d30
//
// 00853d30  68c0000000           push 0xc0
// 00853d35  6a00                 push 0
// 00853d37  6a00                 push 0
// 00853d39  57                   push edi
// 00853d3a  e821320e00           call 0x936f60
// 00853d3f  68d0020000           push 0x2d0
// 00853d44  6a00                 push 0
// 00853d46  894628               mov dword ptr [esi + 0x28], eax
// 00853d49  894614               mov dword ptr [esi + 0x14], eax
// 00853d4c  05a8000000           add eax, 0xa8
// 00853d51  6a00                 push 0
// 00853d53  57                   push edi
// 00853d54  c7463008000000       mov dword ptr [esi + 0x30], 8
// 00853d5b  894624               mov dword ptr [esi + 0x24], eax
// 00853d5e  e8fd310e00           call 0x936f60
// 00853d63  8b5614               mov edx, dword ptr [esi + 0x14]
// 00853d66  894608               mov dword ptr [esi + 8], eax
// 00853d69  894620               mov dword ptr [esi + 0x20], eax
// 00853d6c  8d8870020000         lea ecx, [eax + 0x270]
// 00853d72  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00853d75  c7462c2d000000       mov dword ptr [esi + 0x2c], 0x2d
// 00853d7c  894204               mov dword ptr [edx + 4], eax
// 00853d7f  8b4608               mov eax, dword ptr [esi + 8]
// 00853d82  c7400800000000       mov dword ptr [eax + 8], 0
// 00853d89  83460810             add dword ptr [esi + 8], 0x10
// 00853d8d  8b4608               mov eax, dword ptr [esi + 8]
// 00853d90  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00853d93  8901                 mov dword ptr [ecx], eax
// 00853d95  8b4614               mov eax, dword ptr [esi + 0x14]
// 00853d98  8b4e08               mov ecx, dword ptr [esi + 8]
// 00853d9b  8b10                 mov edx, dword ptr [eax]
// 00853d9d  81c140010000         add ecx, 0x140
// 00853da3  89560c               mov dword ptr [esi + 0xc], edx
// 00853da6  83c420               add esp, 0x20
// 00853da9  894808               mov dword ptr [eax + 8], ecx
// 00853dac  c3                   ret 
// library lua-5.1.4/lstate.c (function _stack_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
