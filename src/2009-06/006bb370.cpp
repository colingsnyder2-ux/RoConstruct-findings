// roc 2009-06 006bb370  unit: RBX::Lua::LuaArguments  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006bb370
//
// 006bb370  8b4110               mov eax, dword ptr [ecx + 0x10]
// 006bb373  50                   push eax
// 006bb374  e807daffff           call 0x6b8d80
// 006bb379  83c404               add esp, 4
// 006bb37c  48                   dec eax
// 006bb37d  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?size@LuaArguments@Lua@RBX@@UBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
