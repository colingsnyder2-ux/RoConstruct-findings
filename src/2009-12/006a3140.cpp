// roc 2009-12 006a3140  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a3140
//
// 006a3140  a1842bb600           mov eax, dword ptr [0xb62b84]
// 006a3145  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006a3149  50                   push eax
// 006a314a  6a01                 push 1
// 006a314c  51                   push ecx
// 006a314d  e80e750e00           call 0x78a660
// 006a3152  83c40c               add esp, 0xc
// 006a3155  8bc8                 mov ecx, eax
// 006a3157  e8f47dd7ff           call 0x41af50
// 006a315c  33c0                 xor eax, eax
// 006a315e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
