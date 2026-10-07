// roc 2010-06 0072df10  unit: seg_00720000  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0072df10
//
// 0072df10  a1902abe00           mov eax, dword ptr [0xbe2a90]
// 0072df15  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0072df19  50                   push eax
// 0072df1a  6a01                 push 1
// 0072df1c  51                   push ecx
// 0072df1d  e8ee4effff           call 0x722e10
// 0072df22  83c40c               add esp, 0xc
// 0072df25  8bc8                 mov ecx, eax
// 0072df27  e864d1e9ff           call 0x5cb090
// 0072df2c  33c0                 xor eax, eax
// 0072df2e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
