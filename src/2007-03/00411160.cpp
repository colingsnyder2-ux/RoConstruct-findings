// roc 2007-03 00411160  unit: seg_00410000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00411160
//
// 00411160  51                   push ecx
// 00411161  8b542410             mov edx, dword ptr [esp + 0x10]
// 00411165  c6042400             mov byte ptr [esp], 0
// 00411169  8b0424               mov eax, dword ptr [esp]
// 0041116c  50                   push eax
// 0041116d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00411171  52                   push edx
// 00411172  8b542410             mov edx, dword ptr [esp + 0x10]
// 00411176  51                   push ecx
// 00411177  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0041117b  50                   push eax
// 0041117c  51                   push ecx
// 0041117d  52                   push edx
// 0041117e  e85df8ffff           call 0x4109e0
// 00411183  83c41c               add esp, 0x1c
// 00411186  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
