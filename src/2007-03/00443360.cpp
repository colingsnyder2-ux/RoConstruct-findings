// roc 2007-03 00443360  unit: seg_00440000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00443360
//
// 00443360  51                   push ecx
// 00443361  8b542410             mov edx, dword ptr [esp + 0x10]
// 00443365  c6042400             mov byte ptr [esp], 0
// 00443369  8b0424               mov eax, dword ptr [esp]
// 0044336c  50                   push eax
// 0044336d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00443371  52                   push edx
// 00443372  8b542410             mov edx, dword ptr [esp + 0x10]
// 00443376  51                   push ecx
// 00443377  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0044337b  50                   push eax
// 0044337c  51                   push ecx
// 0044337d  52                   push edx
// 0044337e  e81dfeffff           call 0x4431a0
// 00443383  83c41c               add esp, 0x1c
// 00443386  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
