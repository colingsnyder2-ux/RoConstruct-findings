// roc 2009-06 00634950  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634950
//
// 00634950  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 00634955  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634959  50                   push eax
// 0063495a  6a01                 push 1
// 0063495c  51                   push ecx
// 0063495d  e84e620800           call 0x6babb0
// 00634962  83c40c               add esp, 0xc
// 00634965  33c0                 xor eax, eax
// 00634967  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
