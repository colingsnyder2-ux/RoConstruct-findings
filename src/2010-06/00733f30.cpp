// roc 2010-06 00733f30  unit: seg_00730000  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733f30
//
// 00733f30  68c0000000           push 0xc0
// 00733f35  6a00                 push 0
// 00733f37  6a00                 push 0
// 00733f39  57                   push edi
// 00733f3a  e8c1aa0400           call 0x77ea00
// 00733f3f  68d0020000           push 0x2d0
// 00733f44  6a00                 push 0
// 00733f46  894628               mov dword ptr [esi + 0x28], eax
// 00733f49  894614               mov dword ptr [esi + 0x14], eax
// 00733f4c  05a8000000           add eax, 0xa8
// 00733f51  6a00                 push 0
// 00733f53  57                   push edi
// 00733f54  c7463008000000       mov dword ptr [esi + 0x30], 8
// 00733f5b  894624               mov dword ptr [esi + 0x24], eax
// 00733f5e  e89daa0400           call 0x77ea00
// 00733f63  8b5614               mov edx, dword ptr [esi + 0x14]
// 00733f66  894608               mov dword ptr [esi + 8], eax
// 00733f69  894620               mov dword ptr [esi + 0x20], eax
// 00733f6c  8d8870020000         lea ecx, [eax + 0x270]
// 00733f72  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00733f75  c7462c2d000000       mov dword ptr [esi + 0x2c], 0x2d
// 00733f7c  894204               mov dword ptr [edx + 4], eax
// 00733f7f  8b4608               mov eax, dword ptr [esi + 8]
// 00733f82  c7400800000000       mov dword ptr [eax + 8], 0
// 00733f89  83460810             add dword ptr [esi + 8], 0x10
// 00733f8d  8b4608               mov eax, dword ptr [esi + 8]
// 00733f90  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00733f93  8901                 mov dword ptr [ecx], eax
// 00733f95  8b4614               mov eax, dword ptr [esi + 0x14]
// 00733f98  8b4e08               mov ecx, dword ptr [esi + 8]
// 00733f9b  8b10                 mov edx, dword ptr [eax]
// 00733f9d  81c140010000         add ecx, 0x140
// 00733fa3  89560c               mov dword ptr [esi + 0xc], edx
// 00733fa6  83c420               add esp, 0x20
// 00733fa9  894808               mov dword ptr [eax + 8], ecx
// 00733fac  c3                   ret 
// library lua-5.1.4/lstate.c (function _stack_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
