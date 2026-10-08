// roc 2007-08 005bf8c0  unit: RBX::Lua::LuaArguments  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bf8c0
//
// 005bf8c0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 005bf8c3  50                   push eax
// 005bf8c4  e8b7dcffff           call 0x5bd580
// 005bf8c9  83c404               add esp, 4
// 005bf8cc  83e801               sub eax, 1
// 005bf8cf  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?size@LuaArguments@Lua@RBX@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
