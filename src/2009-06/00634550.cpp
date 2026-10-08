// roc 2009-06 00634550  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634550
//
// 00634550  a1f42aa200           mov eax, dword ptr [0xa22af4]
// 00634555  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634559  50                   push eax
// 0063455a  6a01                 push 1
// 0063455c  51                   push ecx
// 0063455d  e84e660800           call 0x6babb0
// 00634562  83c40c               add esp, 0xc
// 00634565  33c0                 xor eax, eax
// 00634567  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
