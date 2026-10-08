// from server: 100% by auto
// roc 2012-06 00833260  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833260
//
// 00833260  53                   push ebx
// 00833261  56                   push esi
// 00833262  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00833266  57                   push edi
// 00833267  8b7e08               mov edi, dword ptr [esi + 8]
// 0083326a  8d442410             lea eax, [esp + 0x10]
// 0083326e  50                   push eax
// 0083326f  6aff                 push -1
// 00833271  57                   push edi
// 00833272  e879ecffff           call 0x831ef0
// 00833277  8b0e                 mov ecx, dword ptr [esi]
// 00833279  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0083327d  8bde                 mov ebx, esi
// 0083327f  2bd9                 sub ebx, ecx
// 00833281  81c30c020000         add ebx, 0x20c
// 00833287  83c40c               add esp, 0xc
// 0083328a  3bd3                 cmp edx, ebx
// 0083328c  771d                 ja 0x8332ab
// 0083328e  52                   push edx
// 0083328f  50                   push eax
// 00833290  51                   push ecx
// 00833291  e8c6031500           call 0x98365c
// 00833296  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0083329a  010e                 add dword ptr [esi], ecx
// 0083329c  6afe                 push -2
// 0083329e  57                   push edi
// 0083329f  e85ce8ffff           call 0x831b00
// 008332a4  83c414               add esp, 0x14
// 008332a7  5f                   pop edi
// 008332a8  5e                   pop esi
// 008332a9  5b                   pop ebx
// 008332aa  c3                   ret 
// 008332ab  2bce                 sub ecx, esi
// 008332ad  83e90c               sub ecx, 0xc
// 008332b0  741e                 je 0x8332d0
// 008332b2  8b5608               mov edx, dword ptr [esi + 8]
// 008332b5  51                   push ecx
// 008332b6  8d5e0c               lea ebx, [esi + 0xc]
// 008332b9  53                   push ebx
// 008332ba  52                   push edx
// 008332bb  e830eeffff           call 0x8320f0
// 008332c0  ff4604               inc dword ptr [esi + 4]
// 008332c3  6afe                 push -2
// 008332c5  57                   push edi
// 008332c6  891e                 mov dword ptr [esi], ebx
// 008332c8  e8d3e8ffff           call 0x831ba0
// 008332cd  83c414               add esp, 0x14
// 008332d0  ff4604               inc dword ptr [esi + 4]
// 008332d3  56                   push esi
// 008332d4  e837feffff           call 0x833110
// 008332d9  83c404               add esp, 4
// 008332dc  5f                   pop edi
// 008332dd  5e                   pop esi
// 008332de  5b                   pop ebx
// 008332df  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_addvalue)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
