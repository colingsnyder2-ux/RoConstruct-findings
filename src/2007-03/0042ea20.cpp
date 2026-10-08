// roc 2007-03 0042ea20  unit: seg_00420000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042ea20
//
// 0042ea20  51                   push ecx
// 0042ea21  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042ea25  c6042400             mov byte ptr [esp], 0
// 0042ea29  8b0424               mov eax, dword ptr [esp]
// 0042ea2c  50                   push eax
// 0042ea2d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0042ea31  52                   push edx
// 0042ea32  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042ea36  51                   push ecx
// 0042ea37  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042ea3b  50                   push eax
// 0042ea3c  51                   push ecx
// 0042ea3d  52                   push edx
// 0042ea3e  e8edfdffff           call 0x42e830
// 0042ea43  83c41c               add esp, 0x1c
// 0042ea46  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
