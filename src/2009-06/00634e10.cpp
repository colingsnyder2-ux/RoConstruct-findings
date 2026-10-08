// roc 2009-06 00634e10  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634e10
//
// 00634e10  a10c2ba200           mov eax, dword ptr [0xa22b0c]
// 00634e15  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634e19  50                   push eax
// 00634e1a  6a01                 push 1
// 00634e1c  51                   push ecx
// 00634e1d  e88e5d0800           call 0x6babb0
// 00634e22  83c40c               add esp, 0xc
// 00634e25  33c0                 xor eax, eax
// 00634e27  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
