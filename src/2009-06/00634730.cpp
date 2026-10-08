// roc 2009-06 00634730  unit: RBX::VScriptContext::?$FactoryProduct  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634730
//
// 00634730  a14ce2a100           mov eax, dword ptr [0xa1e24c]
// 00634735  56                   push esi
// 00634736  8b742408             mov esi, dword ptr [esp + 8]
// 0063473a  50                   push eax
// 0063473b  6a01                 push 1
// 0063473d  56                   push esi
// 0063473e  e86d640800           call 0x6babb0
// 00634743  68d4b28d00           push 0x8db2d4
// 00634748  56                   push esi
// 00634749  e8724c0800           call 0x6b93c0
// 0063474e  83c414               add esp, 0x14
// 00634751  b801000000           mov eax, 1
// 00634756  5e                   pop esi
// 00634757  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
