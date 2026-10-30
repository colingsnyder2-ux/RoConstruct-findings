// from server: 100% by auto
// roc 2009-06 006bae70  unit: RBX::UniversalTool  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bae70
//
// 006bae70  56                   push esi
// 006bae71  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006bae75  57                   push edi
// 006bae76  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006bae7a  56                   push esi
// 006bae7b  57                   push edi
// 006bae7c  e8efe0ffff           call 0x6b8f70
// 006bae81  83c408               add esp, 8
// 006bae84  85c0                 test eax, eax
// 006bae86  7f07                 jg 0x6bae8f
// 006bae88  8b442414             mov eax, dword ptr [esp + 0x14]
// 006bae8c  5f                   pop edi
// 006bae8d  5e                   pop esi
// 006bae8e  c3                   ret 
// 006bae8f  56                   push esi
// 006bae90  57                   push edi
// 006bae91  e86affffff           call 0x6bae00
// 006bae96  83c408               add esp, 8
// 006bae99  5f                   pop edi
// 006bae9a  5e                   pop esi
// 006bae9b  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_optinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
