// roc 2007-03 005bab30  unit: seg_005b0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005bab30
//
// 005bab30  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005bab33  50                   push eax
// 005bab34  e817dfffff           call 0x5b8a50
// 005bab39  83c404               add esp, 4
// 005bab3c  83e801               sub eax, 1
// 005bab3f  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?size@LuaArguments@Lua@RBX@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
