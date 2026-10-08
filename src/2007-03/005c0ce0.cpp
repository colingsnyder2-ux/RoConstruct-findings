// roc 2007-03 005c0ce0  unit: seg_005c0000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0ce0
//
// 005c0ce0  51                   push ecx
// 005c0ce1  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c0ce5  c6042400             mov byte ptr [esp], 0
// 005c0ce9  8b0424               mov eax, dword ptr [esp]
// 005c0cec  50                   push eax
// 005c0ced  8b442414             mov eax, dword ptr [esp + 0x14]
// 005c0cf1  52                   push edx
// 005c0cf2  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c0cf6  51                   push ecx
// 005c0cf7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005c0cfb  50                   push eax
// 005c0cfc  51                   push ecx
// 005c0cfd  52                   push edx
// 005c0cfe  e86dfdffff           call 0x5c0a70
// 005c0d03  83c41c               add esp, 0x1c
// 005c0d06  c20c00               ret 0xc
// library rbxgs/script\ScriptContext.cpp (function ??$_Umove@PAV?$shared_ptr@VScript@RBX@@@boost@@@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEPAV?$shared_ptr@VScript@RBX@@@boost@@PAV23@00@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
