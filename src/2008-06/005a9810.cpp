// roc 2008-06 005a9810  unit: RBX::VScriptContext::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9810
//
// 005a9810  a130979400           mov eax, dword ptr [0x949730]
// 005a9815  56                   push esi
// 005a9816  8b742408             mov esi, dword ptr [esp + 8]
// 005a981a  50                   push eax
// 005a981b  6a01                 push 1
// 005a981d  56                   push esi
// 005a981e  e88d7d0600           call 0x6115b0
// 005a9823  6864438300           push 0x834364
// 005a9828  56                   push esi
// 005a9829  e8528a0600           call 0x612280
// 005a982e  83c414               add esp, 0x14
// 005a9831  b801000000           mov eax, 1
// 005a9836  5e                   pop esi
// 005a9837  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
