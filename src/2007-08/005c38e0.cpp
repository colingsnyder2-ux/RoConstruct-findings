// roc 2007-08 005c38e0  unit: RBX::Lua::LuaArguments  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c38e0
//
// 005c38e0  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 005c38e5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005c38e9  50                   push eax
// 005c38ea  6a01                 push 1
// 005c38ec  51                   push ecx
// 005c38ed  e84eb9ffff           call 0x5bf240
// 005c38f2  83c40c               add esp, 0xc
// 005c38f5  8bc8                 mov ecx, eax
// 005c38f7  e8544a1600           call 0x728350
// 005c38fc  33c0                 xor eax, eax
// 005c38fe  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
