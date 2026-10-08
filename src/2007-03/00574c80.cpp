// roc 2007-03 00574c80  unit: seg_00570000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574c80
//
// 00574c80  8b442408             mov eax, dword ptr [esp + 8]
// 00574c84  8b542404             mov edx, dword ptr [esp + 4]
// 00574c88  50                   push eax
// 00574c89  51                   push ecx
// 00574c8a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00574c8e  51                   push ecx
// 00574c8f  52                   push edx
// 00574c90  e84bfdffff           call 0x5749e0
// 00574c95  83c410               add esp, 0x10
// 00574c98  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Destroy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXPAV?$shared_ptr@VScript@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
