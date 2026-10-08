// roc 2007-03 004e48d0  unit: seg_004e0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e48d0
//
// 004e48d0  51                   push ecx
// 004e48d1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e48d5  c6042400             mov byte ptr [esp], 0
// 004e48d9  8b0424               mov eax, dword ptr [esp]
// 004e48dc  50                   push eax
// 004e48dd  8b442414             mov eax, dword ptr [esp + 0x14]
// 004e48e1  52                   push edx
// 004e48e2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004e48e6  51                   push ecx
// 004e48e7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004e48eb  50                   push eax
// 004e48ec  51                   push ecx
// 004e48ed  52                   push edx
// 004e48ee  e8fdebffff           call 0x4e34f0
// 004e48f3  83c41c               add esp, 0x1c
// 004e48f6  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
