// roc 2007-03 00499370  unit: seg_00490000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00499370
//
// 00499370  51                   push ecx
// 00499371  8b542410             mov edx, dword ptr [esp + 0x10]
// 00499375  c6042400             mov byte ptr [esp], 0
// 00499379  8b0424               mov eax, dword ptr [esp]
// 0049937c  50                   push eax
// 0049937d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00499381  52                   push edx
// 00499382  8b542410             mov edx, dword ptr [esp + 0x10]
// 00499386  51                   push ecx
// 00499387  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0049938b  50                   push eax
// 0049938c  51                   push ecx
// 0049938d  52                   push edx
// 0049938e  e8edfcffff           call 0x499080
// 00499393  83c41c               add esp, 0x1c
// 00499396  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
