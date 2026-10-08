// roc 2007-03 005811f0  unit: seg_00580000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005811f0
//
// 005811f0  51                   push ecx
// 005811f1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005811f5  c6042400             mov byte ptr [esp], 0
// 005811f9  8b0424               mov eax, dword ptr [esp]
// 005811fc  50                   push eax
// 005811fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00581201  52                   push edx
// 00581202  8b542410             mov edx, dword ptr [esp + 0x10]
// 00581206  51                   push ecx
// 00581207  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0058120b  50                   push eax
// 0058120c  51                   push ecx
// 0058120d  52                   push edx
// 0058120e  e83d6f0300           call 0x5b8150
// 00581213  83c41c               add esp, 0x1c
// 00581216  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
