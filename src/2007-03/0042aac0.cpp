// roc 2007-03 0042aac0  unit: seg_00420000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042aac0
//
// 0042aac0  51                   push ecx
// 0042aac1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042aac5  c6042400             mov byte ptr [esp], 0
// 0042aac9  8b0424               mov eax, dword ptr [esp]
// 0042aacc  50                   push eax
// 0042aacd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042aad1  52                   push edx
// 0042aad2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042aad6  51                   push ecx
// 0042aad7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042aadb  50                   push eax
// 0042aadc  51                   push ecx
// 0042aadd  52                   push edx
// 0042aade  e8cdf6ffff           call 0x42a1b0
// 0042aae3  83c41c               add esp, 0x1c
// 0042aae6  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
