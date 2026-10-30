// from server: 100% by auto
// roc 2010-06 00722f20  unit: RBX::UniversalTool  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00722f20
//
// 00722f20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00722f24  53                   push ebx
// 00722f25  56                   push esi
// 00722f26  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00722f2a  57                   push edi
// 00722f2b  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00722f2f  50                   push eax
// 00722f30  57                   push edi
// 00722f31  56                   push esi
// 00722f32  e819e4ffff           call 0x721350
// 00722f37  8bd8                 mov ebx, eax
// 00722f39  83c40c               add esp, 0xc
// 00722f3c  85db                 test ebx, ebx
// 00722f3e  7534                 jne 0x722f74
// 00722f40  55                   push ebp
// 00722f41  6a04                 push 4
// 00722f43  56                   push esi
// 00722f44  e817e2ffff           call 0x721160
// 00722f49  57                   push edi
// 00722f4a  56                   push esi
// 00722f4b  8be8                 mov ebp, eax
// 00722f4d  e8eee1ffff           call 0x721140
// 00722f52  50                   push eax
// 00722f53  56                   push esi
// 00722f54  e807e2ffff           call 0x721160
// 00722f59  50                   push eax
// 00722f5a  55                   push ebp
// 00722f5b  6894cfa400           push 0xa4cf94
// 00722f60  56                   push esi
// 00722f61  e8cae6ffff           call 0x721630
// 00722f66  50                   push eax
// 00722f67  57                   push edi
// 00722f68  56                   push esi
// 00722f69  e8c2fdffff           call 0x722d30
// 00722f6e  83c434               add esp, 0x34
// 00722f71  8bc3                 mov eax, ebx
// 00722f73  5d                   pop ebp
// 00722f74  5f                   pop edi
// 00722f75  5e                   pop esi
// 00722f76  5b                   pop ebx
// 00722f77  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checklstring)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
