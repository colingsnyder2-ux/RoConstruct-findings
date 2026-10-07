// roc 2012-06 00833a60  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833a60
//
// 00833a60  53                   push ebx
// 00833a61  56                   push esi
// 00833a62  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00833a66  57                   push edi
// 00833a67  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00833a6b  57                   push edi
// 00833a6c  56                   push esi
// 00833a6d  e80ee4ffff           call 0x831e80
// 00833a72  8bd8                 mov ebx, eax
// 00833a74  83c408               add esp, 8
// 00833a77  85db                 test ebx, ebx
// 00833a79  7542                 jne 0x833abd
// 00833a7b  57                   push edi
// 00833a7c  56                   push esi
// 00833a7d  e8cee2ffff           call 0x831d50
// 00833a82  83c408               add esp, 8
// 00833a85  85c0                 test eax, eax
// 00833a87  7532                 jne 0x833abb
// 00833a89  55                   push ebp
// 00833a8a  6a03                 push 3
// 00833a8c  56                   push esi
// 00833a8d  e86ee2ffff           call 0x831d00
// 00833a92  57                   push edi
// 00833a93  56                   push esi
// 00833a94  8be8                 mov ebp, eax
// 00833a96  e845e2ffff           call 0x831ce0
// 00833a9b  50                   push eax
// 00833a9c  56                   push esi
// 00833a9d  e85ee2ffff           call 0x831d00
// 00833aa2  50                   push eax
// 00833aa3  55                   push ebp
// 00833aa4  68d40abd00           push 0xbd0ad4
// 00833aa9  56                   push esi
// 00833aaa  e821e7ffff           call 0x8321d0
// 00833aaf  50                   push eax
// 00833ab0  57                   push edi
// 00833ab1  56                   push esi
// 00833ab2  e879fcffff           call 0x833730
// 00833ab7  83c434               add esp, 0x34
// 00833aba  5d                   pop ebp
// 00833abb  8bc3                 mov eax, ebx
// 00833abd  5f                   pop edi
// 00833abe  5e                   pop esi
// 00833abf  5b                   pop ebx
// 00833ac0  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checkinteger)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
