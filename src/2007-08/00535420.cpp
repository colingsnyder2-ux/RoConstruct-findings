// roc 2007-08 00535420  unit: std::logic_error  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535420
//
// 00535420  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 00535425  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00535429  50                   push eax
// 0053542a  6a01                 push 1
// 0053542c  51                   push ecx
// 0053542d  e80e9e0800           call 0x5bf240
// 00535432  83c40c               add esp, 0xc
// 00535435  8bc8                 mov ecx, eax
// 00535437  e824301f00           call 0x728460
// 0053543c  33c0                 xor eax, eax
// 0053543e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
