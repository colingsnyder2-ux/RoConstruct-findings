// from server: 100% by auto
// roc 2007-08 005c5a30  unit: lua_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c5a30
//
// 005c5a30  53                   push ebx
// 005c5a31  55                   push ebp
// 005c5a32  56                   push esi
// 005c5a33  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c5a37  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005c5a3a  57                   push edi
// 005c5a3b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005c5a3f  8d5f06               lea ebx, [edi + 6]
// 005c5a42  8d4301               lea eax, [ebx + 1]
// 005c5a45  3dffffff0f           cmp eax, 0xfffffff
// 005c5a4a  7719                 ja 0x5c5a65
// 005c5a4c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 005c5a4f  8bcb                 mov ecx, ebx
// 005c5a51  c1e104               shl ecx, 4
// 005c5a54  51                   push ecx
// 005c5a55  c1e204               shl edx, 4
// 005c5a58  52                   push edx
// 005c5a59  55                   push ebp
// 005c5a5a  56                   push esi
// 005c5a5b  e890df0400           call 0x6139f0
// 005c5a60  83c410               add esp, 0x10
// 005c5a63  eb09                 jmp 0x5c5a6e
// 005c5a65  56                   push esi
// 005c5a66  e865df0400           call 0x6139d0
// 005c5a6b  83c404               add esp, 4
// 005c5a6e  c1e704               shl edi, 4
// 005c5a71  03f8                 add edi, eax
// 005c5a73  897e1c               mov dword ptr [esi + 0x1c], edi
// 005c5a76  5f                   pop edi
// 005c5a77  895e2c               mov dword ptr [esi + 0x2c], ebx
// 005c5a7a  894620               mov dword ptr [esi + 0x20], eax
// 005c5a7d  8bce                 mov ecx, esi
// 005c5a7f  5e                   pop esi
// 005c5a80  8bd5                 mov edx, ebp
// 005c5a82  5d                   pop ebp
// 005c5a83  5b                   pop ebx
// 005c5a84  e917ffffff           jmp 0x5c59a0
// library lua-5.1.4/ldo.c (function _luaD_reallocstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
