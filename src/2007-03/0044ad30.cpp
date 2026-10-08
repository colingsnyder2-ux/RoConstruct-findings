// roc 2007-03 0044ad30  unit: seg_00440000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0044ad30
//
// 0044ad30  51                   push ecx
// 0044ad31  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044ad35  c6042400             mov byte ptr [esp], 0
// 0044ad39  8b0424               mov eax, dword ptr [esp]
// 0044ad3c  50                   push eax
// 0044ad3d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0044ad41  52                   push edx
// 0044ad42  8b542410             mov edx, dword ptr [esp + 0x10]
// 0044ad46  51                   push ecx
// 0044ad47  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0044ad4b  50                   push eax
// 0044ad4c  51                   push ecx
// 0044ad4d  52                   push edx
// 0044ad4e  e88dfdffff           call 0x44aae0
// 0044ad53  83c41c               add esp, 0x1c
// 0044ad56  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
