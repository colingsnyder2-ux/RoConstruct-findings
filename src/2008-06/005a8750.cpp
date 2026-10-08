// roc 2008-06 005a8750  unit: RBX::Log  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8750
//
// 005a8750  e87bfcf5ff           call 0x5083d0
// 005a8755  8b442404             mov eax, dword ptr [esp + 4]
// 005a8759  83ec08               sub esp, 8
// 005a875c  dd1c24               fstp qword ptr [esp]
// 005a875f  50                   push eax
// 005a8760  e89b9a0600           call 0x612200
// 005a8765  83c40c               add esp, 0xc
// 005a8768  b801000000           mov eax, 1
// 005a876d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
