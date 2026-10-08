// roc 2007-03 0040ebf0  unit: seg_00400000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040ebf0
//
// 0040ebf0  51                   push ecx
// 0040ebf1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040ebf5  c6042400             mov byte ptr [esp], 0
// 0040ebf9  8b0424               mov eax, dword ptr [esp]
// 0040ebfc  50                   push eax
// 0040ebfd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0040ec01  52                   push edx
// 0040ec02  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040ec06  51                   push ecx
// 0040ec07  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0040ec0b  50                   push eax
// 0040ec0c  51                   push ecx
// 0040ec0d  52                   push edx
// 0040ec0e  e8ddab1200           call 0x5397f0
// 0040ec13  83c41c               add esp, 0x1c
// 0040ec16  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
