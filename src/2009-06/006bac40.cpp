// from server: 100% by auto
// roc 2009-06 006bac40  unit: RBX::UniversalTool  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bac40
//
// 006bac40  56                   push esi
// 006bac41  8b742408             mov esi, dword ptr [esp + 8]
// 006bac45  57                   push edi
// 006bac46  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006bac4a  57                   push edi
// 006bac4b  56                   push esi
// 006bac4c  e81fe3ffff           call 0x6b8f70
// 006bac51  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006bac55  83c408               add esp, 8
// 006bac58  3bc1                 cmp eax, ecx
// 006bac5a  7431                 je 0x6bac8d
// 006bac5c  53                   push ebx
// 006bac5d  51                   push ecx
// 006bac5e  56                   push esi
// 006bac5f  e82ce3ffff           call 0x6b8f90
// 006bac64  57                   push edi
// 006bac65  56                   push esi
// 006bac66  8bd8                 mov ebx, eax
// 006bac68  e803e3ffff           call 0x6b8f70
// 006bac6d  50                   push eax
// 006bac6e  56                   push esi
// 006bac6f  e81ce3ffff           call 0x6b8f90
// 006bac74  50                   push eax
// 006bac75  53                   push ebx
// 006bac76  68acaf8e00           push 0x8eafac
// 006bac7b  56                   push esi
// 006bac7c  e8dfe7ffff           call 0x6b9460
// 006bac81  50                   push eax
// 006bac82  57                   push edi
// 006bac83  56                   push esi
// 006bac84  e847feffff           call 0x6baad0
// 006bac89  83c434               add esp, 0x34
// 006bac8c  5b                   pop ebx
// 006bac8d  5f                   pop edi
// 006bac8e  5e                   pop esi
// 006bac8f  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_checktype)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
