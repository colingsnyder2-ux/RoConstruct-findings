// roc 2012-06 00854680  unit: lua_exception  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00854680
//
// 00854680  53                   push ebx
// 00854681  55                   push ebp
// 00854682  56                   push esi
// 00854683  8b742410             mov esi, dword ptr [esp + 0x10]
// 00854687  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0085468a  57                   push edi
// 0085468b  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0085468f  8d5f06               lea ebx, [edi + 6]
// 00854692  8d4301               lea eax, [ebx + 1]
// 00854695  3dffffff0f           cmp eax, 0xfffffff
// 0085469a  7719                 ja 0x8546b5
// 0085469c  8b562c               mov edx, dword ptr [esi + 0x2c]
// 0085469f  8bcb                 mov ecx, ebx
// 008546a1  c1e104               shl ecx, 4
// 008546a4  51                   push ecx
// 008546a5  c1e204               shl edx, 4
// 008546a8  52                   push edx
// 008546a9  55                   push ebp
// 008546aa  56                   push esi
// 008546ab  e8b0280e00           call 0x936f60
// 008546b0  83c410               add esp, 0x10
// 008546b3  eb09                 jmp 0x8546be
// 008546b5  56                   push esi
// 008546b6  e885280e00           call 0x936f40
// 008546bb  83c404               add esp, 4
// 008546be  c1e704               shl edi, 4
// 008546c1  03f8                 add edi, eax
// 008546c3  897e1c               mov dword ptr [esi + 0x1c], edi
// 008546c6  5f                   pop edi
// 008546c7  895e2c               mov dword ptr [esi + 0x2c], ebx
// 008546ca  894620               mov dword ptr [esi + 0x20], eax
// 008546cd  8bce                 mov ecx, esi
// 008546cf  5e                   pop esi
// 008546d0  8bd5                 mov edx, ebp
// 008546d2  5d                   pop ebp
// 008546d3  5b                   pop ebx
// 008546d4  e917ffffff           jmp 0x8545f0
// library lua-5.1.4/ldo.c (function _luaD_reallocstack)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldo.c
