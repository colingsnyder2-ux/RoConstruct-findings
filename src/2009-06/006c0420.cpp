// roc 2009-06 006c0420  unit: RBX::Lua::LuaArguments  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c0420
//
// 006c0420  a11c2ba200           mov eax, dword ptr [0xa22b1c]
// 006c0425  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006c0429  50                   push eax
// 006c042a  6a01                 push 1
// 006c042c  51                   push ecx
// 006c042d  e87ea7ffff           call 0x6babb0
// 006c0432  83c40c               add esp, 0xc
// 006c0435  8bc8                 mov ecx, eax
// 006c0437  e84497f3ff           call 0x5f9b80
// 006c043c  33c0                 xor eax, eax
// 006c043e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
