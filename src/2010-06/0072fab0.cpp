// from server: 100% by auto
// roc 2010-06 0072fab0  unit: lua_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072fab0
//
// 0072fab0  53                   push ebx
// 0072fab1  55                   push ebp
// 0072fab2  56                   push esi
// 0072fab3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0072fab7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0072faba  57                   push edi
// 0072fabb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0072fabf  8d5f06               lea ebx, [edi + 6]
// 0072fac2  8d4301               lea eax, [ebx + 1]
// 0072fac5  3dffffff0f           cmp eax, 0xfffffff
// 0072faca  7719                 ja 0x72fae5
// 0072facc  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0072facf  8bcb                 mov ecx, ebx
// 0072fad1  c1e104               shl ecx, 4
// 0072fad4  51                   push ecx
// 0072fad5  c1e204               shl edx, 4
// 0072fad8  52                   push edx
// 0072fad9  55                   push ebp
// 0072fada  56                   push esi
// 0072fadb  e820ef0400           call 0x77ea00
// 0072fae0  83c410               add esp, 0x10
// 0072fae3  eb09                 jmp 0x72faee
// 0072fae5  56                   push esi
// 0072fae6  e8f5ee0400           call 0x77e9e0
// 0072faeb  83c404               add esp, 4
// 0072faee  c1e704               shl edi, 4
// 0072faf1  03f8                 add edi, eax
// 0072faf3  897e1c               mov dword ptr [esi + 0x1c], edi
// 0072faf6  5f                   pop edi
// 0072faf7  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0072fafa  894620               mov dword ptr [esi + 0x20], eax
// 0072fafd  8bce                 mov ecx, esi
// 0072faff  5e                   pop esi
// 0072fb00  8bd5                 mov edx, ebp
// 0072fb02  5d                   pop ebp
// 0072fb03  5b                   pop ebx
// 0072fb04  e917ffffff           jmp 0x72fa20
// library lua-5.1.4/ldo.c (function _luaD_reallocstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
