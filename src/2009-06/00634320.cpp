// roc 2009-06 00634320  unit: RBX::VScriptContext::?$FactoryProduct  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634320
//
// 00634320  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 00634325  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00634329  50                   push eax
// 0063432a  6a01                 push 1
// 0063432c  51                   push ecx
// 0063432d  e87e680800           call 0x6babb0
// 00634332  83c40c               add esp, 0xc
// 00634335  33c0                 xor eax, eax
// 00634337  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_gc@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
