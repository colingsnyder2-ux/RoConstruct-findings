// roc 2008-06 005a9710  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9710
//
// 005a9710  a1e8b19500           mov eax, dword ptr [0x95b1e8]
// 005a9715  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a9719  50                   push eax
// 005a971a  6a01                 push 1
// 005a971c  51                   push ecx
// 005a971d  e88e7e0600           call 0x6115b0
// 005a9722  83c40c               add esp, 0xc
// 005a9725  8bc8                 mov ecx, eax
// 005a9727  e844bcfeff           call 0x595370
// 005a972c  33c0                 xor eax, eax
// 005a972e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
