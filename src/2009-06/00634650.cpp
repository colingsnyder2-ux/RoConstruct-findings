// roc 2009-06 00634650  unit: RBX::VScriptContext::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634650
//
// 00634650  a11c2ba200           mov eax, dword ptr [0xa22b1c]
// 00634655  56                   push esi
// 00634656  8b742408             mov esi, dword ptr [esp + 8]
// 0063465a  50                   push eax
// 0063465b  6a01                 push 1
// 0063465d  56                   push esi
// 0063465e  e84d650800           call 0x6babb0
// 00634663  68c8b28d00           push 0x8db2c8
// 00634668  56                   push esi
// 00634669  e8524d0800           call 0x6b93c0
// 0063466e  83c414               add esp, 0x14
// 00634671  b801000000           mov eax, 1
// 00634676  5e                   pop esi
// 00634677  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
