// from server: 100% by auto
// roc 2007-08 005c59a0  unit: lua_exception  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c59a0
//
// 005c59a0  8b4108               mov eax, dword ptr [ecx + 8]
// 005c59a3  2bc2                 sub eax, edx
// 005c59a5  c1f804               sar eax, 4
// 005c59a8  c1e004               shl eax, 4
// 005c59ab  034120               add eax, dword ptr [ecx + 0x20]
// 005c59ae  56                   push esi
// 005c59af  894108               mov dword ptr [ecx + 8], eax
// 005c59b2  8b4168               mov eax, dword ptr [ecx + 0x68]
// 005c59b5  85c0                 test eax, eax
// 005c59b7  741e                 je 0x5c59d7
// 005c59b9  8da42400000000       lea esp, [esp]
// 005c59c0  8b7008               mov esi, dword ptr [eax + 8]
// 005c59c3  2bf2                 sub esi, edx
// 005c59c5  c1fe04               sar esi, 4
// 005c59c8  c1e604               shl esi, 4
// 005c59cb  037120               add esi, dword ptr [ecx + 0x20]
// 005c59ce  897008               mov dword ptr [eax + 8], esi
// 005c59d1  8b00                 mov eax, dword ptr [eax]
// 005c59d3  85c0                 test eax, eax
// 005c59d5  75e9                 jne 0x5c59c0
// 005c59d7  8b4128               mov eax, dword ptr [ecx + 0x28]
// 005c59da  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 005c59dd  773c                 ja 0x5c5a1b
// 005c59df  90                   nop 
// 005c59e0  8b7008               mov esi, dword ptr [eax + 8]
// 005c59e3  2bf2                 sub esi, edx
// 005c59e5  c1fe04               sar esi, 4
// 005c59e8  c1e604               shl esi, 4
// 005c59eb  037120               add esi, dword ptr [ecx + 0x20]
// 005c59ee  83c018               add eax, 0x18
// 005c59f1  8970f0               mov dword ptr [eax - 0x10], esi
// 005c59f4  8b70e8               mov esi, dword ptr [eax - 0x18]
// 005c59f7  2bf2                 sub esi, edx
// 005c59f9  c1fe04               sar esi, 4
// 005c59fc  c1e604               shl esi, 4
// 005c59ff  037120               add esi, dword ptr [ecx + 0x20]
// 005c5a02  8970e8               mov dword ptr [eax - 0x18], esi
// 005c5a05  8b70ec               mov esi, dword ptr [eax - 0x14]
// 005c5a08  2bf2                 sub esi, edx
// 005c5a0a  c1fe04               sar esi, 4
// 005c5a0d  c1e604               shl esi, 4
// 005c5a10  037120               add esi, dword ptr [ecx + 0x20]
// 005c5a13  8970ec               mov dword ptr [eax - 0x14], esi
// 005c5a16  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 005c5a19  76c5                 jbe 0x5c59e0
// 005c5a1b  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005c5a1e  2bc2                 sub eax, edx
// 005c5a20  c1f804               sar eax, 4
// 005c5a23  c1e004               shl eax, 4
// 005c5a26  034120               add eax, dword ptr [ecx + 0x20]
// 005c5a29  5e                   pop esi
// 005c5a2a  89410c               mov dword ptr [ecx + 0xc], eax
// 005c5a2d  c3                   ret 
// library lua-5.1.4/ldo.c (function _correctstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
