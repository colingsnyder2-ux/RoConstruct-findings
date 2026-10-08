// roc 2007-03 00609be0  unit: seg_00600000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00609be0
//
// 00609be0  8b442408             mov eax, dword ptr [esp + 8]
// 00609be4  8b542404             mov edx, dword ptr [esp + 4]
// 00609be8  50                   push eax
// 00609be9  51                   push ecx
// 00609bea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00609bee  51                   push ecx
// 00609bef  52                   push edx
// 00609bf0  e8ebf5ffff           call 0x6091e0
// 00609bf5  83c410               add esp, 0x10
// 00609bf8  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Destroy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXPAV?$shared_ptr@VScript@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
