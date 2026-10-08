// roc 2007-03 00608720  unit: seg_00600000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00608720
//
// 00608720  51                   push ecx
// 00608721  8b542410             mov edx, dword ptr [esp + 0x10]
// 00608725  c6042400             mov byte ptr [esp], 0
// 00608729  8b0424               mov eax, dword ptr [esp]
// 0060872c  50                   push eax
// 0060872d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00608731  52                   push edx
// 00608732  8b542410             mov edx, dword ptr [esp + 0x10]
// 00608736  51                   push ecx
// 00608737  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060873b  50                   push eax
// 0060873c  51                   push ecx
// 0060873d  52                   push edx
// 0060873e  e87dfcffff           call 0x6083c0
// 00608743  83c41c               add esp, 0x1c
// 00608746  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
