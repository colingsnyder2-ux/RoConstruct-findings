// roc 2010-06 00722e10  unit: RBX::UniversalTool  size: 138 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722e10
//
// 00722e10  53                   push ebx
// 00722e11  55                   push ebp
// 00722e12  56                   push esi
// 00722e13  8b742410             mov esi, dword ptr [esp + 0x10]
// 00722e17  57                   push edi
// 00722e18  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00722e1c  57                   push edi
// 00722e1d  56                   push esi
// 00722e1e  e80de6ffff           call 0x721430
// 00722e23  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00722e27  8bd8                 mov ebx, eax
// 00722e29  83c408               add esp, 8
// 00722e2c  85db                 test ebx, ebx
// 00722e2e  743d                 je 0x722e6d
// 00722e30  57                   push edi
// 00722e31  56                   push esi
// 00722e32  e8a9eaffff           call 0x7218e0
// 00722e37  83c408               add esp, 8
// 00722e3a  85c0                 test eax, eax
// 00722e3c  742f                 je 0x722e6d
// 00722e3e  55                   push ebp
// 00722e3f  68f0d8ffff           push 0xffffd8f0
// 00722e44  56                   push esi
// 00722e45  e856e9ffff           call 0x7217a0
// 00722e4a  6afe                 push -2
// 00722e4c  6aff                 push -1
// 00722e4e  56                   push esi
// 00722e4f  e8cce3ffff           call 0x721220
// 00722e54  83c418               add esp, 0x18
// 00722e57  85c0                 test eax, eax
// 00722e59  7412                 je 0x722e6d
// 00722e5b  6afd                 push -3
// 00722e5d  56                   push esi
// 00722e5e  e8fde0ffff           call 0x720f60
// 00722e63  83c408               add esp, 8
// 00722e66  5f                   pop edi
// 00722e67  5e                   pop esi
// 00722e68  5d                   pop ebp
// 00722e69  8bc3                 mov eax, ebx
// 00722e6b  5b                   pop ebx
// 00722e6c  c3                   ret 
// 00722e6d  57                   push edi
// 00722e6e  56                   push esi
// 00722e6f  e8cce2ffff           call 0x721140
// 00722e74  50                   push eax
// 00722e75  56                   push esi
// 00722e76  e8e5e2ffff           call 0x721160
// 00722e7b  50                   push eax
// 00722e7c  55                   push ebp
// 00722e7d  6894cfa400           push 0xa4cf94
// 00722e82  56                   push esi
// 00722e83  e8a8e7ffff           call 0x721630
// 00722e88  50                   push eax
// 00722e89  57                   push edi
// 00722e8a  56                   push esi
// 00722e8b  e8a0feffff           call 0x722d30
// 00722e90  83c42c               add esp, 0x2c
// 00722e93  5f                   pop edi
// 00722e94  5e                   pop esi
// 00722e95  5d                   pop ebp
// 00722e96  33c0                 xor eax, eax
// 00722e98  5b                   pop ebx
// 00722e99  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkudata)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
