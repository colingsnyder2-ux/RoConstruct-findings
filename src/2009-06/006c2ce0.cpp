// roc 2009-06 006c2ce0  unit: lua_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c2ce0
//
// 006c2ce0  53                   push ebx
// 006c2ce1  55                   push ebp
// 006c2ce2  56                   push esi
// 006c2ce3  8b742410             mov esi, dword ptr [esp + 0x10]
// 006c2ce7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 006c2cea  57                   push edi
// 006c2ceb  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006c2cef  8d5f06               lea ebx, [edi + 6]
// 006c2cf2  8d4301               lea eax, [ebx + 1]
// 006c2cf5  3dffffff0f           cmp eax, 0xfffffff
// 006c2cfa  7719                 ja 0x6c2d15
// 006c2cfc  8b562c               mov edx, dword ptr [esi + 0x2c]
// 006c2cff  8bcb                 mov ecx, ebx
// 006c2d01  c1e104               shl ecx, 4
// 006c2d04  51                   push ecx
// 006c2d05  c1e204               shl edx, 4
// 006c2d08  52                   push edx
// 006c2d09  55                   push ebp
// 006c2d0a  56                   push esi
// 006c2d0b  e850aa0200           call 0x6ed760
// 006c2d10  83c410               add esp, 0x10
// 006c2d13  eb09                 jmp 0x6c2d1e
// 006c2d15  56                   push esi
// 006c2d16  e825aa0200           call 0x6ed740
// 006c2d1b  83c404               add esp, 4
// 006c2d1e  c1e704               shl edi, 4
// 006c2d21  03f8                 add edi, eax
// 006c2d23  897e1c               mov dword ptr [esi + 0x1c], edi
// 006c2d26  5f                   pop edi
// 006c2d27  895e2c               mov dword ptr [esi + 0x2c], ebx
// 006c2d2a  894620               mov dword ptr [esi + 0x20], eax
// 006c2d2d  8bce                 mov ecx, esi
// 006c2d2f  5e                   pop esi
// 006c2d30  8bd5                 mov edx, ebp
// 006c2d32  5d                   pop ebp
// 006c2d33  5b                   pop ebx
// 006c2d34  e917ffffff           jmp 0x6c2c50
// library lua-5.1.4/ldo.c (function _luaD_reallocstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
