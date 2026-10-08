// roc 2007-03 004e3b00  unit: seg_004e0000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e3b00
//
// 004e3b00  8b442408             mov eax, dword ptr [esp + 8]
// 004e3b04  8b542404             mov edx, dword ptr [esp + 4]
// 004e3b08  50                   push eax
// 004e3b09  51                   push ecx
// 004e3b0a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e3b0e  51                   push ecx
// 004e3b0f  52                   push edx
// 004e3b10  e8abfcffff           call 0x4e37c0
// 004e3b15  83c410               add esp, 0x10
// 004e3b18  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Destroy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXPAV?$shared_ptr@VScript@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
