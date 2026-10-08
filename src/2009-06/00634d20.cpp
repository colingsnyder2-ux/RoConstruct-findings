// roc 2009-06 00634d20  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634d20
//
// 00634d20  a1082ba200           mov eax, dword ptr [0xa22b08]
// 00634d25  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634d29  50                   push eax
// 00634d2a  6a01                 push 1
// 00634d2c  51                   push ecx
// 00634d2d  e87e5e0800           call 0x6babb0
// 00634d32  83c40c               add esp, 0xc
// 00634d35  33c0                 xor eax, eax
// 00634d37  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
