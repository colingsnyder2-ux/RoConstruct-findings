// roc 2007-08 005c8580  unit: lua_exception  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c8580
//
// 005c8580  68c0000000           push 0xc0
// 005c8585  6a00                 push 0
// 005c8587  6a00                 push 0
// 005c8589  57                   push edi
// 005c858a  e861b40400           call 0x6139f0
// 005c858f  68d0020000           push 0x2d0
// 005c8594  6a00                 push 0
// 005c8596  894628               mov dword ptr [esi + 0x28], eax
// 005c8599  894614               mov dword ptr [esi + 0x14], eax
// 005c859c  05a8000000           add eax, 0xa8
// 005c85a1  6a00                 push 0
// 005c85a3  57                   push edi
// 005c85a4  c7463008000000       mov dword ptr [esi + 0x30], 8
// 005c85ab  894624               mov dword ptr [esi + 0x24], eax
// 005c85ae  e83db40400           call 0x6139f0
// 005c85b3  8b5614               mov edx, dword ptr [esi + 0x14]
// 005c85b6  894608               mov dword ptr [esi + 8], eax
// 005c85b9  894620               mov dword ptr [esi + 0x20], eax
// 005c85bc  8d8870020000         lea ecx, [eax + 0x270]
// 005c85c2  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005c85c5  c7462c2d000000       mov dword ptr [esi + 0x2c], 0x2d
// 005c85cc  894204               mov dword ptr [edx + 4], eax
// 005c85cf  8b4608               mov eax, dword ptr [esi + 8]
// 005c85d2  c7400800000000       mov dword ptr [eax + 8], 0
// 005c85d9  83460810             add dword ptr [esi + 8], 0x10
// 005c85dd  8b4608               mov eax, dword ptr [esi + 8]
// 005c85e0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005c85e3  8901                 mov dword ptr [ecx], eax
// 005c85e5  8b4614               mov eax, dword ptr [esi + 0x14]
// 005c85e8  8b4e08               mov ecx, dword ptr [esi + 8]
// 005c85eb  8b10                 mov edx, dword ptr [eax]
// 005c85ed  81c140010000         add ecx, 0x140
// 005c85f3  89560c               mov dword ptr [esi + 0xc], edx
// 005c85f6  83c420               add esp, 0x20
// 005c85f9  894808               mov dword ptr [eax + 8], ecx
// 005c85fc  c3                   ret 
// library lua-5.1.4/lstate.c (function _stack_init)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
