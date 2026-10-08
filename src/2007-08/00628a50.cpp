// from server: 100% by auto
// roc 2007-08 00628a50  unit: RBX::AssemblyStage  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628a50
//
// 00628a50  83ec20               sub esp, 0x20
// 00628a53  53                   push ebx
// 00628a54  8bd8                 mov ebx, eax
// 00628a56  8b4304               mov eax, dword ptr [ebx + 4]
// 00628a59  8d4c2414             lea ecx, [esp + 0x14]
// 00628a5d  51                   push ecx
// 00628a5e  8d4c2408             lea ecx, [esp + 8]
// 00628a62  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00628a6a  89442408             mov dword ptr [esp + 8], eax
// 00628a6e  c744241005000000     mov dword ptr [esp + 0x10], 5
// 00628a76  e895feffff           call 0x628910
// 00628a7b  83c404               add esp, 4
// 00628a7e  5b                   pop ebx
// 00628a7f  83c420               add esp, 0x20
// 00628a82  c3                   ret 
// library lua-5.1.4/lcode.c (function _nilK)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
