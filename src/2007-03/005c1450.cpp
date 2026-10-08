// roc 2007-03 005c1450  unit: seg_005c0000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c1450
//
// 005c1450  d9ee                 fldz 
// 005c1452  8b442404             mov eax, dword ptr [esp + 4]
// 005c1456  51                   push ecx
// 005c1457  d91c24               fstp dword ptr [esp]
// 005c145a  50                   push eax
// 005c145b  e8b0fdffff           call 0x5c1210
// 005c1460  c20400               ret 4
// library rbxgs/script\ScriptEvent.cpp (function ?queueWaiter@YieldingThreads@Lua@RBX@@QAEXPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
