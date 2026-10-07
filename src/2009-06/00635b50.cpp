// roc 2009-06 00635b50  unit: RBX::Lua::VFunctionRef::?$holder  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635b50
//
// 00635b50  a11c2ba200           mov eax, dword ptr [0xa22b1c]
// 00635b55  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00635b59  50                   push eax
// 00635b5a  6a01                 push 1
// 00635b5c  51                   push ecx
// 00635b5d  e84e500800           call 0x6babb0
// 00635b62  83c40c               add esp, 0xc
// 00635b65  8bc8                 mov ecx, eax
// 00635b67  e8b44fdeff           call 0x41ab20
// 00635b6c  33c0                 xor eax, eax
// 00635b6e  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ?disconnect@SignalConnectionBridge@Lua@RBX@@CAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
