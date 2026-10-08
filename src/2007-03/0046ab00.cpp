// roc 2007-03 0046ab00  unit: seg_00460000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046ab00
//
// 0046ab00  51                   push ecx
// 0046ab01  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046ab05  c6042400             mov byte ptr [esp], 0
// 0046ab09  8b0424               mov eax, dword ptr [esp]
// 0046ab0c  50                   push eax
// 0046ab0d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0046ab11  52                   push edx
// 0046ab12  8b542410             mov edx, dword ptr [esp + 0x10]
// 0046ab16  51                   push ecx
// 0046ab17  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0046ab1b  50                   push eax
// 0046ab1c  51                   push ecx
// 0046ab1d  52                   push edx
// 0046ab1e  e8edfcffff           call 0x46a810
// 0046ab23  83c41c               add esp, 0x1c
// 0046ab26  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
