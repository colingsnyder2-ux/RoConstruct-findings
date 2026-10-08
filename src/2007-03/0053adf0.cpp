// roc 2007-03 0053adf0  unit: seg_00530000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053adf0
//
// 0053adf0  8b442408             mov eax, dword ptr [esp + 8]
// 0053adf4  8b542404             mov edx, dword ptr [esp + 4]
// 0053adf8  50                   push eax
// 0053adf9  51                   push ecx
// 0053adfa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053adfe  51                   push ecx
// 0053adff  52                   push edx
// 0053ae00  e8abf8ffff           call 0x53a6b0
// 0053ae05  83c410               add esp, 0x10
// 0053ae08  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Destroy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXPAV?$shared_ptr@VScript@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
