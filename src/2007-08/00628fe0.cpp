// roc 2007-08 00628fe0  unit: RBX::AssemblyStage  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00628fe0
//
// 00628fe0  8b442404             mov eax, dword ptr [esp + 4]
// 00628fe4  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00628fe7  8b542408             mov edx, dword ptr [esp + 8]
// 00628feb  89481c               mov dword ptr [eax + 0x1c], ecx
// 00628fee  52                   push edx
// 00628fef  8d4820               lea ecx, [eax + 0x20]
// 00628ff2  51                   push ecx
// 00628ff3  50                   push eax
// 00628ff4  e827f8ffff           call 0x628820
// 00628ff9  83c40c               add esp, 0xc
// 00628ffc  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_patchtohere)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
