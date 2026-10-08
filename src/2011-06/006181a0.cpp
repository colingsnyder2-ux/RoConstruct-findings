// roc 2011-06 006181a0  unit: boost::bad_lexical_cast  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006181a0
//
// 006181a0  e85b75f2ff           call 0x53f700
// 006181a5  8b442404             mov eax, dword ptr [esp + 4]
// 006181a9  83ec08               sub esp, 8
// 006181ac  dd1c24               fstp qword ptr [esp]
// 006181af  50                   push eax
// 006181b0  e86ba71400           call 0x762920
// 006181b5  83c40c               add esp, 0xc
// 006181b8  b801000000           mov eax, 1
// 006181bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
