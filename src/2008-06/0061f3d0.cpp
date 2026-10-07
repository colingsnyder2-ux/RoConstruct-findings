// roc 2008-06 0061f3d0  unit: RBX::Lua::LuaArguments  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f3d0
//
// 0061f3d0  a1e8b19500           mov eax, dword ptr [0x95b1e8]
// 0061f3d5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0061f3d9  50                   push eax
// 0061f3da  6a01                 push 1
// 0061f3dc  51                   push ecx
// 0061f3dd  e8ce21ffff           call 0x6115b0
// 0061f3e2  83c40c               add esp, 0xc
// 0061f3e5  8bc8                 mov ecx, eax
// 0061f3e7  e8445ef7ff           call 0x595230
// 0061f3ec  33c0                 xor eax, eax
// 0061f3ee  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
