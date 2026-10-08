// roc 2010-06 0060a970  unit: std::strstream  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060a970
//
// 0060a970  e8eb37f4ff           call 0x54e160
// 0060a975  8b442404             mov eax, dword ptr [esp + 4]
// 0060a979  83ec08               sub esp, 8
// 0060a97c  dd1c24               fstp qword ptr [esp]
// 0060a97f  50                   push eax
// 0060a980  e88b6b1100           call 0x721510
// 0060a985  83c40c               add esp, 0xc
// 0060a988  b801000000           mov eax, 1
// 0060a98d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
