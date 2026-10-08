// roc 2007-03 00499350  unit: seg_00490000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00499350
//
// 00499350  8b442408             mov eax, dword ptr [esp + 8]
// 00499354  8b542404             mov edx, dword ptr [esp + 4]
// 00499358  50                   push eax
// 00499359  51                   push ecx
// 0049935a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049935e  51                   push ecx
// 0049935f  52                   push edx
// 00499360  e82bffffff           call 0x499290
// 00499365  83c410               add esp, 0x10
// 00499368  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Destroy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXPAV?$shared_ptr@VScript@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
