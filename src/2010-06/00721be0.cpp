// roc 2010-06 00721be0  unit: RBX::UniversalTool  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00721be0
//
// 00721be0  8b442408             mov eax, dword ptr [esp + 8]
// 00721be4  56                   push esi
// 00721be5  8b742408             mov esi, dword ptr [esp + 8]
// 00721be9  57                   push edi
// 00721bea  8bce                 mov ecx, esi
// 00721bec  bf01000000           mov edi, 1
// 00721bf1  e8aaf1ffff           call 0x720da0
// 00721bf6  8b4808               mov ecx, dword ptr [eax + 8]
// 00721bf9  83e906               sub ecx, 6
// 00721bfc  7436                 je 0x721c34
// 00721bfe  2bcf                 sub ecx, edi
// 00721c00  7425                 je 0x721c27
// 00721c02  2bcf                 sub ecx, edi
// 00721c04  740b                 je 0x721c11
// 00721c06  33ff                 xor edi, edi
// 00721c08  834608f0             add dword ptr [esi + 8], -0x10
// 00721c0c  8bc7                 mov eax, edi
// 00721c0e  5f                   pop edi
// 00721c0f  5e                   pop esi
// 00721c10  c3                   ret 
// 00721c11  8b08                 mov ecx, dword ptr [eax]
// 00721c13  8b5608               mov edx, dword ptr [esi + 8]
// 00721c16  8b52f0               mov edx, dword ptr [edx - 0x10]
// 00721c19  83c148               add ecx, 0x48
// 00721c1c  8911                 mov dword ptr [ecx], edx
// 00721c1e  c7410805000000       mov dword ptr [ecx + 8], 5
// 00721c25  eb18                 jmp 0x721c3f
// 00721c27  8b4e08               mov ecx, dword ptr [esi + 8]
// 00721c2a  8b10                 mov edx, dword ptr [eax]
// 00721c2c  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 00721c2f  894a0c               mov dword ptr [edx + 0xc], ecx
// 00721c32  eb0b                 jmp 0x721c3f
// 00721c34  8b5608               mov edx, dword ptr [esi + 8]
// 00721c37  8b08                 mov ecx, dword ptr [eax]
// 00721c39  8b52f0               mov edx, dword ptr [edx - 0x10]
// 00721c3c  89510c               mov dword ptr [ecx + 0xc], edx
// 00721c3f  8b4e08               mov ecx, dword ptr [esi + 8]
// 00721c42  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 00721c45  f6410503             test byte ptr [ecx + 5], 3
// 00721c49  7413                 je 0x721c5e
// 00721c4b  8b00                 mov eax, dword ptr [eax]
// 00721c4d  f6400504             test byte ptr [eax + 5], 4
// 00721c51  740b                 je 0x721c5e
// 00721c53  51                   push ecx
// 00721c54  50                   push eax
// 00721c55  56                   push esi
// 00721c56  e8f5920500           call 0x77af50
// 00721c5b  83c40c               add esp, 0xc
// 00721c5e  834608f0             add dword ptr [esi + 8], -0x10
// 00721c62  8bc7                 mov eax, edi
// 00721c64  5f                   pop edi
// 00721c65  5e                   pop esi
// 00721c66  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
