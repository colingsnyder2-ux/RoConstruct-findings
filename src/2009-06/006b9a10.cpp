// roc 2009-06 006b9a10  unit: RBX::UniversalTool  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006b9a10
//
// 006b9a10  8b442408             mov eax, dword ptr [esp + 8]
// 006b9a14  56                   push esi
// 006b9a15  8b742408             mov esi, dword ptr [esp + 8]
// 006b9a19  57                   push edi
// 006b9a1a  8bce                 mov ecx, esi
// 006b9a1c  bf01000000           mov edi, 1
// 006b9a21  e8aaf1ffff           call 0x6b8bd0
// 006b9a26  8b4808               mov ecx, dword ptr [eax + 8]
// 006b9a29  83e906               sub ecx, 6
// 006b9a2c  7436                 je 0x6b9a64
// 006b9a2e  2bcf                 sub ecx, edi
// 006b9a30  7425                 je 0x6b9a57
// 006b9a32  2bcf                 sub ecx, edi
// 006b9a34  740b                 je 0x6b9a41
// 006b9a36  33ff                 xor edi, edi
// 006b9a38  834608f0             add dword ptr [esi + 8], -0x10
// 006b9a3c  8bc7                 mov eax, edi
// 006b9a3e  5f                   pop edi
// 006b9a3f  5e                   pop esi
// 006b9a40  c3                   ret 
// 006b9a41  8b08                 mov ecx, dword ptr [eax]
// 006b9a43  8b5608               mov edx, dword ptr [esi + 8]
// 006b9a46  8b52f0               mov edx, dword ptr [edx - 0x10]
// 006b9a49  83c148               add ecx, 0x48
// 006b9a4c  8911                 mov dword ptr [ecx], edx
// 006b9a4e  c7410805000000       mov dword ptr [ecx + 8], 5
// 006b9a55  eb18                 jmp 0x6b9a6f
// 006b9a57  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b9a5a  8b10                 mov edx, dword ptr [eax]
// 006b9a5c  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 006b9a5f  894a0c               mov dword ptr [edx + 0xc], ecx
// 006b9a62  eb0b                 jmp 0x6b9a6f
// 006b9a64  8b5608               mov edx, dword ptr [esi + 8]
// 006b9a67  8b08                 mov ecx, dword ptr [eax]
// 006b9a69  8b52f0               mov edx, dword ptr [edx - 0x10]
// 006b9a6c  89510c               mov dword ptr [ecx + 0xc], edx
// 006b9a6f  8b4e08               mov ecx, dword ptr [esi + 8]
// 006b9a72  8b49f0               mov ecx, dword ptr [ecx - 0x10]
// 006b9a75  f6410503             test byte ptr [ecx + 5], 3
// 006b9a79  7413                 je 0x6b9a8e
// 006b9a7b  8b00                 mov eax, dword ptr [eax]
// 006b9a7d  f6400504             test byte ptr [eax + 5], 4
// 006b9a81  740b                 je 0x6b9a8e
// 006b9a83  51                   push ecx
// 006b9a84  50                   push eax
// 006b9a85  56                   push esi
// 006b9a86  e825020300           call 0x6e9cb0
// 006b9a8b  83c40c               add esp, 0xc
// 006b9a8e  834608f0             add dword ptr [esi + 8], -0x10
// 006b9a92  8bc7                 mov eax, edi
// 006b9a94  5f                   pop edi
// 006b9a95  5e                   pop esi
// 006b9a96  c3                   ret 
// library lua-5.1.4/lapi.c (function _lua_setfenv)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lapi.c
