// roc 2007-03 005376a0  unit: seg_00530000  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005376a0
//
// 005376a0  a15c828a00           mov eax, dword ptr [0x8a825c]
// 005376a5  56                   push esi
// 005376a6  8b742408             mov esi, dword ptr [esp + 8]
// 005376aa  50                   push eax
// 005376ab  6a01                 push 1
// 005376ad  56                   push esi
// 005376ae  e8fd2d0800           call 0x5ba4b0
// 005376b3  68f0607800           push 0x7860f0
// 005376b8  56                   push esi
// 005376b9  e8021a0800           call 0x5b90c0
// 005376be  83c414               add esp, 0x14
// 005376c1  b801000000           mov eax, 1
// 005376c6  5e                   pop esi
// 005376c7  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
