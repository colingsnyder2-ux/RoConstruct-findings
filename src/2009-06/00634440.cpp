// roc 2009-06 00634440  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634440
//
// 00634440  a1f02aa200           mov eax, dword ptr [0xa22af0]
// 00634445  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634449  50                   push eax
// 0063444a  6a01                 push 1
// 0063444c  51                   push ecx
// 0063444d  e85e670800           call 0x6babb0
// 00634452  83c40c               add esp, 0xc
// 00634455  33c0                 xor eax, eax
// 00634457  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
