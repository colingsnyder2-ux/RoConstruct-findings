// roc 2009-12 0078b020  unit: RBX::Lua::LuaArguments  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0078b020
//
// 0078b020  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0078b023  50                   push eax
// 0078b024  e877d7ffff           call 0x7887a0
// 0078b029  83c404               add esp, 4
// 0078b02c  48                   dec eax
// 0078b02d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?size@LuaArguments@Lua@RBX@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
