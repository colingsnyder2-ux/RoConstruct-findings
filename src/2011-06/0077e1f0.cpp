// roc 2011-06 0077e1f0  unit: lua_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077e1f0
//
// 0077e1f0  53                   push ebx
// 0077e1f1  55                   push ebp
// 0077e1f2  56                   push esi
// 0077e1f3  8b742410             mov esi, dword ptr [esp + 0x10]
// 0077e1f7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0077e1fa  57                   push edi
// 0077e1fb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0077e1ff  8d5f06               lea ebx, [edi + 6]
// 0077e202  8d4301               lea eax, [ebx + 1]
// 0077e205  3dffffff0f           cmp eax, 0xfffffff
// 0077e20a  7719                 ja 0x77e225
// 0077e20c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0077e20f  8bcb                 mov ecx, ebx
// 0077e211  c1e104               shl ecx, 4
// 0077e214  51                   push ecx
// 0077e215  c1e204               shl edx, 4
// 0077e218  52                   push edx
// 0077e219  55                   push ebp
// 0077e21a  56                   push esi
// 0077e21b  e820cc0500           call 0x7dae40
// 0077e220  83c410               add esp, 0x10
// 0077e223  eb09                 jmp 0x77e22e
// 0077e225  56                   push esi
// 0077e226  e8f5cb0500           call 0x7dae20
// 0077e22b  83c404               add esp, 4
// 0077e22e  c1e704               shl edi, 4
// 0077e231  03f8                 add edi, eax
// 0077e233  897e1c               mov dword ptr [esi + 0x1c], edi
// 0077e236  5f                   pop edi
// 0077e237  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0077e23a  894620               mov dword ptr [esi + 0x20], eax
// 0077e23d  8bce                 mov ecx, esi
// 0077e23f  5e                   pop esi
// 0077e240  8bd5                 mov edx, ebp
// 0077e242  5d                   pop ebp
// 0077e243  5b                   pop ebx
// 0077e244  e917ffffff           jmp 0x77e160
// library lua-5.1.4/ldo.c (function _luaD_reallocstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
