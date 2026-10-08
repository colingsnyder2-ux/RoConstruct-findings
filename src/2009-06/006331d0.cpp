// roc 2009-06 006331d0  unit: std::strstream  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006331d0
//
// 006331d0  e87b88f3ff           call 0x56ba50
// 006331d5  8b442404             mov eax, dword ptr [esp + 4]
// 006331d9  83ec08               sub esp, 8
// 006331dc  dd1c24               fstp qword ptr [esp]
// 006331df  50                   push eax
// 006331e0  e85b610800           call 0x6b9340
// 006331e5  83c40c               add esp, 0xc
// 006331e8  b801000000           mov eax, 1
// 006331ed  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
