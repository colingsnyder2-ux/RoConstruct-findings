// roc 2007-03 0053a840  unit: seg_00530000  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a840
//
// 0053a840  8b442408             mov eax, dword ptr [esp + 8]
// 0053a844  8b542404             mov edx, dword ptr [esp + 4]
// 0053a848  50                   push eax
// 0053a849  51                   push ecx
// 0053a84a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053a84e  51                   push ecx
// 0053a84f  52                   push edx
// 0053a850  e89b51f6ff           call 0x49f9f0
// 0053a855  83c410               add esp, 0x10
// 0053a858  c20800               ret 8
// library rbxgs/script\ScriptContext.cpp (function ?_Destroy@?$vector@V?$shared_ptr@VScript@RBX@@@boost@@V?$allocator@V?$shared_ptr@VScript@RBX@@@boost@@@std@@@std@@IAEXPAV?$shared_ptr@VScript@RBX@@@boost@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
