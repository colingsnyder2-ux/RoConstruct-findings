// from server: 100% by auto
// roc 2008-06 00621a70  unit: lua_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621a70
//
// 00621a70  53                   push ebx
// 00621a71  55                   push ebp
// 00621a72  56                   push esi
// 00621a73  8b742410             mov esi, dword ptr [esp + 0x10]
// 00621a77  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 00621a7a  57                   push edi
// 00621a7b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00621a7f  8d5f06               lea ebx, [edi + 6]
// 00621a82  8d4301               lea eax, [ebx + 1]
// 00621a85  3dffffff0f           cmp eax, 0xfffffff
// 00621a8a  7719                 ja 0x621aa5
// 00621a8c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 00621a8f  8bcb                 mov ecx, ebx
// 00621a91  c1e104               shl ecx, 4
// 00621a94  51                   push ecx
// 00621a95  c1e204               shl edx, 4
// 00621a98  52                   push edx
// 00621a99  55                   push ebp
// 00621a9a  56                   push esi
// 00621a9b  e850ec0300           call 0x6606f0
// 00621aa0  83c410               add esp, 0x10
// 00621aa3  eb09                 jmp 0x621aae
// 00621aa5  56                   push esi
// 00621aa6  e825ec0300           call 0x6606d0
// 00621aab  83c404               add esp, 4
// 00621aae  c1e704               shl edi, 4
// 00621ab1  03f8                 add edi, eax
// 00621ab3  897e1c               mov dword ptr [esi + 0x1c], edi
// 00621ab6  5f                   pop edi
// 00621ab7  895e2c               mov dword ptr [esi + 0x2c], ebx
// 00621aba  894620               mov dword ptr [esi + 0x20], eax
// 00621abd  8bce                 mov ecx, esi
// 00621abf  5e                   pop esi
// 00621ac0  8bd5                 mov edx, ebp
// 00621ac2  5d                   pop ebp
// 00621ac3  5b                   pop ebx
// 00621ac4  e917ffffff           jmp 0x6219e0
// library lua-5.1.4/ldo.c (function _luaD_reallocstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
