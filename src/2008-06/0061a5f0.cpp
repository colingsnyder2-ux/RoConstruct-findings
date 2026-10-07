// roc 2008-06 0061a5f0  unit: RBX::Lua::LuaArguments  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061a5f0
//
// 0061a5f0  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0061a5f3  50                   push eax
// 0061a5f4  e81776ffff           call 0x611c10
// 0061a5f9  83c404               add esp, 4
// 0061a5fc  48                   dec eax
// 0061a5fd  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?size@LuaArguments@Lua@RBX@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
