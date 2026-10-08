// roc 2009-06 00634860  unit: RBX::VScriptContext::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634860
//
// 00634860  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 00634865  56                   push esi
// 00634866  8b742408             mov esi, dword ptr [esp + 8]
// 0063486a  50                   push eax
// 0063486b  6a01                 push 1
// 0063486d  56                   push esi
// 0063486e  e83d630800           call 0x6babb0
// 00634873  56                   push esi
// 00634874  50                   push eax
// 00634875  e816ecffff           call 0x633490
// 0063487a  83c414               add esp, 0x14
// 0063487d  5e                   pop esi
// 0063487e  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@VCoordinateFrame@G3D@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
