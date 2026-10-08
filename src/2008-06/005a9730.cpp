// roc 2008-06 005a9730  unit: RBX::VScriptContext::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9730
//
// 005a9730  a1e8b19500           mov eax, dword ptr [0x95b1e8]
// 005a9735  56                   push esi
// 005a9736  8b742408             mov esi, dword ptr [esp + 8]
// 005a973a  50                   push eax
// 005a973b  6a01                 push 1
// 005a973d  56                   push esi
// 005a973e  e86d7e0600           call 0x6115b0
// 005a9743  6858438300           push 0x834358
// 005a9748  56                   push esi
// 005a9749  e8328b0600           call 0x612280
// 005a974e  83c414               add esp, 0x14
// 005a9751  b801000000           mov eax, 1
// 005a9756  5e                   pop esi
// 005a9757  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
