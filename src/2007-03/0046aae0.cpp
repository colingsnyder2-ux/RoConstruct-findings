// roc 2007-03 0046aae0  unit: seg_00460000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0046aae0
//
// 0046aae0  8b442408             mov eax, dword ptr [esp + 8]
// 0046aae4  8b542404             mov edx, dword ptr [esp + 4]
// 0046aae8  50                   push eax
// 0046aae9  51                   push ecx
// 0046aaea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0046aaee  51                   push ecx
// 0046aaef  52                   push edx
// 0046aaf0  e8abfeffff           call 0x46a9a0
// 0046aaf5  83c410               add esp, 0x10
// 0046aaf8  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Destroy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXPAV?$shared_ptr@VScript@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
