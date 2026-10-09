// roc 2009-12 0069f070  unit: std::strstream  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f070
//
// 0069f070  e80bbbf4ff           call 0x5eab80
// 0069f075  8b442404             mov eax, dword ptr [esp + 4]
// 0069f079  83ec08               sub esp, 8
// 0069f07c  dd1c24               fstp qword ptr [esp]
// 0069f07f  50                   push eax
// 0069f080  e8db9c0e00           call 0x788d60
// 0069f085  83c40c               add esp, 0xc
// 0069f088  b801000000           mov eax, 1
// 0069f08d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?tick@ScriptContext@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
