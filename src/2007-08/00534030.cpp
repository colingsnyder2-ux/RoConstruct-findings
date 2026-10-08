// roc 2007-08 00534030  unit: RBX::Selection  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534030
//
// 00534030  e8bbbefcff           call 0x4ffef0
// 00534035  8b442404             mov eax, dword ptr [esp + 4]
// 00534039  83ec08               sub esp, 8
// 0053403c  dd1c24               fstp qword ptr [esp]
// 0053403f  50                   push eax
// 00534040  e82b9b0800           call 0x5bdb70
// 00534045  83c40c               add esp, 0xc
// 00534048  b801000000           mov eax, 1
// 0053404d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
