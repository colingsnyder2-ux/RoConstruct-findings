// from server: 100% by auto
// roc 2007-08 006289f0  unit: RBX::AssemblyStage  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006289f0
//
// 006289f0  83ec10               sub esp, 0x10
// 006289f3  8b442418             mov eax, dword ptr [esp + 0x18]
// 006289f7  53                   push ebx
// 006289f8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006289fc  8d4c2404             lea ecx, [esp + 4]
// 00628a00  51                   push ecx
// 00628a01  89442408             mov dword ptr [esp + 8], eax
// 00628a05  c744241004000000     mov dword ptr [esp + 0x10], 4
// 00628a0d  e8fefeffff           call 0x628910
// 00628a12  83c404               add esp, 4
// 00628a15  5b                   pop ebx
// 00628a16  83c410               add esp, 0x10
// 00628a19  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_stringK)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
