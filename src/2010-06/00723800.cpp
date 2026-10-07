// roc 2010-06 00723800  unit: RBX::Lua::LuaArguments  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00723800
//
// 00723800  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00723803  50                   push eax
// 00723804  e847d7ffff           call 0x720f50
// 00723809  83c404               add esp, 4
// 0072380c  48                   dec eax
// 0072380d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?size@LuaArguments@Lua@RBX@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
