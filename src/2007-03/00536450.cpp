// roc 2007-03 00536450  unit: seg_00530000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536450
//
// 00536450  e80bd6fbff           call 0x4f3a60
// 00536455  8b442404             mov eax, dword ptr [esp + 4]
// 00536459  83ec08               sub esp, 8
// 0053645c  dd1c24               fstp qword ptr [esp]
// 0053645f  50                   push eax
// 00536460  e8db2b0800           call 0x5b9040
// 00536465  83c40c               add esp, 0xc
// 00536468  b801000000           mov eax, 1
// 0053646d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
