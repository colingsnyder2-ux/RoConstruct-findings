// from server: 100% by auto
// roc 2007-08 005c6f70  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6f70
//
// 005c6f70  56                   push esi
// 005c6f71  8b742408             mov esi, dword ptr [esp + 8]
// 005c6f75  8b4674               mov eax, dword ptr [esi + 0x74]
// 005c6f78  85c0                 test eax, eax
// 005c6f7a  746e                 je 0x5c6fea
// 005c6f7c  57                   push edi
// 005c6f7d  8b7e20               mov edi, dword ptr [esi + 0x20]
// 005c6f80  03f8                 add edi, eax
// 005c6f82  837f0806             cmp dword ptr [edi + 8], 6
// 005c6f86  740b                 je 0x5c6f93
// 005c6f88  6a05                 push 5
// 005c6f8a  56                   push esi
// 005c6f8b  e890f0ffff           call 0x5c6020
// 005c6f90  83c408               add esp, 8
// 005c6f93  8b4608               mov eax, dword ptr [esi + 8]
// 005c6f96  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 005c6f99  8908                 mov dword ptr [eax], ecx
// 005c6f9b  8b50f4               mov edx, dword ptr [eax - 0xc]
// 005c6f9e  895004               mov dword ptr [eax + 4], edx
// 005c6fa1  8b48f8               mov ecx, dword ptr [eax - 8]
// 005c6fa4  894808               mov dword ptr [eax + 8], ecx
// 005c6fa7  8b4608               mov eax, dword ptr [esi + 8]
// 005c6faa  8b17                 mov edx, dword ptr [edi]
// 005c6fac  83e810               sub eax, 0x10
// 005c6faf  8910                 mov dword ptr [eax], edx
// 005c6fb1  8b4f04               mov ecx, dword ptr [edi + 4]
// 005c6fb4  894804               mov dword ptr [eax + 4], ecx
// 005c6fb7  8b5708               mov edx, dword ptr [edi + 8]
// 005c6fba  895008               mov dword ptr [eax + 8], edx
// 005c6fbd  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005c6fc0  2b4608               sub eax, dword ptr [esi + 8]
// 005c6fc3  5f                   pop edi
// 005c6fc4  83f810               cmp eax, 0x10
// 005c6fc7  7f0b                 jg 0x5c6fd4
// 005c6fc9  6a01                 push 1
// 005c6fcb  56                   push esi
// 005c6fcc  e83febffff           call 0x5c5b10
// 005c6fd1  83c408               add esp, 8
// 005c6fd4  83460810             add dword ptr [esi + 8], 0x10
// 005c6fd8  8b4608               mov eax, dword ptr [esi + 8]
// 005c6fdb  6a01                 push 1
// 005c6fdd  83c0e0               add eax, -0x20
// 005c6fe0  50                   push eax
// 005c6fe1  56                   push esi
// 005c6fe2  e8e9f2ffff           call 0x5c62d0
// 005c6fe7  83c40c               add esp, 0xc
// 005c6fea  6a02                 push 2
// 005c6fec  56                   push esi
// 005c6fed  e82ef0ffff           call 0x5c6020
// 005c6ff2  83c408               add esp, 8
// 005c6ff5  5e                   pop esi
// 005c6ff6  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_errormsg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
