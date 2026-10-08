// roc 2007-03 00574f70  unit: seg_00570000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574f70
//
// 00574f70  51                   push ecx
// 00574f71  8b542410             mov edx, dword ptr [esp + 0x10]
// 00574f75  c6042400             mov byte ptr [esp], 0
// 00574f79  8b0424               mov eax, dword ptr [esp]
// 00574f7c  50                   push eax
// 00574f7d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00574f81  52                   push edx
// 00574f82  8b542410             mov edx, dword ptr [esp + 0x10]
// 00574f86  51                   push ecx
// 00574f87  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00574f8b  50                   push eax
// 00574f8c  51                   push ecx
// 00574f8d  52                   push edx
// 00574f8e  e8bdedffff           call 0x573d50
// 00574f93  83c41c               add esp, 0x1c
// 00574f96  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
