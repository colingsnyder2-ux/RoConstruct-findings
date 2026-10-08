// from server: 100% by auto
// roc 2007-08 00628a20  unit: RBX::AssemblyStage  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628a20
//
// 00628a20  83ec10               sub esp, 0x10
// 00628a23  dd442418             fld qword ptr [esp + 0x18]
// 00628a27  8d0424               lea eax, [esp]
// 00628a2a  53                   push ebx
// 00628a2b  dd5c2404             fstp qword ptr [esp + 4]
// 00628a2f  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00628a33  50                   push eax
// 00628a34  8bc8                 mov ecx, eax
// 00628a36  c744241003000000     mov dword ptr [esp + 0x10], 3
// 00628a3e  e8cdfeffff           call 0x628910
// 00628a43  83c404               add esp, 4
// 00628a46  5b                   pop ebx
// 00628a47  83c410               add esp, 0x10
// 00628a4a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_numberK)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
