// roc 2008-06 00623b50  unit: lua_exception  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623b50
//
// 00623b50  68c0000000           push 0xc0
// 00623b55  6a00                 push 0
// 00623b57  6a00                 push 0
// 00623b59  57                   push edi
// 00623b5a  e891cb0300           call 0x6606f0
// 00623b5f  68d0020000           push 0x2d0
// 00623b64  6a00                 push 0
// 00623b66  894628               mov dword ptr [esi + 0x28], eax
// 00623b69  894614               mov dword ptr [esi + 0x14], eax
// 00623b6c  05a8000000           add eax, 0xa8
// 00623b71  6a00                 push 0
// 00623b73  57                   push edi
// 00623b74  c7463008000000       mov dword ptr [esi + 0x30], 8
// 00623b7b  894624               mov dword ptr [esi + 0x24], eax
// 00623b7e  e86dcb0300           call 0x6606f0
// 00623b83  8b5614               mov edx, dword ptr [esi + 0x14]
// 00623b86  894608               mov dword ptr [esi + 8], eax
// 00623b89  894620               mov dword ptr [esi + 0x20], eax
// 00623b8c  8d8870020000         lea ecx, [eax + 0x270]
// 00623b92  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00623b95  c7462c2d000000       mov dword ptr [esi + 0x2c], 0x2d
// 00623b9c  894204               mov dword ptr [edx + 4], eax
// 00623b9f  8b4608               mov eax, dword ptr [esi + 8]
// 00623ba2  c7400800000000       mov dword ptr [eax + 8], 0
// 00623ba9  83460810             add dword ptr [esi + 8], 0x10
// 00623bad  8b4608               mov eax, dword ptr [esi + 8]
// 00623bb0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00623bb3  8901                 mov dword ptr [ecx], eax
// 00623bb5  8b4614               mov eax, dword ptr [esi + 0x14]
// 00623bb8  8b4e08               mov ecx, dword ptr [esi + 8]
// 00623bbb  8b10                 mov edx, dword ptr [eax]
// 00623bbd  81c140010000         add ecx, 0x140
// 00623bc3  89560c               mov dword ptr [esi + 0xc], edx
// 00623bc6  83c420               add esp, 0x20
// 00623bc9  894808               mov dword ptr [eax + 8], ecx
// 00623bcc  c3                   ret 
// library lua-5.1.4/lstate.c (function _stack_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
