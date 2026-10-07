// roc 2009-06 006ba600  unit: RBX::UniversalTool  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ba600
//
// 006ba600  53                   push ebx
// 006ba601  56                   push esi
// 006ba602  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006ba606  57                   push edi
// 006ba607  8b7e08               mov edi, dword ptr [esi + 8]
// 006ba60a  8d442410             lea eax, [esp + 0x10]
// 006ba60e  50                   push eax
// 006ba60f  6aff                 push -1
// 006ba611  57                   push edi
// 006ba612  e869ebffff           call 0x6b9180
// 006ba617  8b0e                 mov ecx, dword ptr [esi]
// 006ba619  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006ba61d  8bde                 mov ebx, esi
// 006ba61f  2bd9                 sub ebx, ecx
// 006ba621  81c30c020000         add ebx, 0x20c
// 006ba627  83c40c               add esp, 0xc
// 006ba62a  3bd3                 cmp edx, ebx
// 006ba62c  771d                 ja 0x6ba64b
// 006ba62e  52                   push edx
// 006ba62f  50                   push eax
// 006ba630  51                   push ecx
// 006ba631  e880f80500           call 0x719eb6
// 006ba636  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006ba63a  010e                 add dword ptr [esi], ecx
// 006ba63c  6afe                 push -2
// 006ba63e  57                   push edi
// 006ba63f  e84ce7ffff           call 0x6b8d90
// 006ba644  83c414               add esp, 0x14
// 006ba647  5f                   pop edi
// 006ba648  5e                   pop esi
// 006ba649  5b                   pop ebx
// 006ba64a  c3                   ret 
// 006ba64b  2bce                 sub ecx, esi
// 006ba64d  83e90c               sub ecx, 0xc
// 006ba650  741e                 je 0x6ba670
// 006ba652  8b5608               mov edx, dword ptr [esi + 8]
// 006ba655  51                   push ecx
// 006ba656  8d5e0c               lea ebx, [esi + 0xc]
// 006ba659  53                   push ebx
// 006ba65a  52                   push edx
// 006ba65b  e820edffff           call 0x6b9380
// 006ba660  ff4604               inc dword ptr [esi + 4]
// 006ba663  6afe                 push -2
// 006ba665  57                   push edi
// 006ba666  891e                 mov dword ptr [esi], ebx
// 006ba668  e8c3e7ffff           call 0x6b8e30
// 006ba66d  83c414               add esp, 0x14
// 006ba670  ff4604               inc dword ptr [esi + 4]
// 006ba673  56                   push esi
// 006ba674  e837feffff           call 0x6ba4b0
// 006ba679  83c404               add esp, 4
// 006ba67c  5f                   pop edi
// 006ba67d  5e                   pop esi
// 006ba67e  5b                   pop ebx
// 006ba67f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addvalue)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
