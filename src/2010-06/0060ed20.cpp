// roc 2010-06 0060ed20  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ed20
//
// 0060ed20  a1902abe00           mov eax, dword ptr [0xbe2a90]
// 0060ed25  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0060ed29  50                   push eax
// 0060ed2a  6a01                 push 1
// 0060ed2c  51                   push ecx
// 0060ed2d  e8de401100           call 0x722e10
// 0060ed32  83c40c               add esp, 0xc
// 0060ed35  8bc8                 mov ecx, eax
// 0060ed37  e8a4c2e0ff           call 0x41afe0
// 0060ed3c  33c0                 xor eax, eax
// 0060ed3e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
