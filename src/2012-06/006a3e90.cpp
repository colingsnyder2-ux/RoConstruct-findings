// roc 2012-06 006a3e90  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3e90
//
// 006a3e90  56                   push esi
// 006a3e91  8b742408             mov esi, dword ptr [esp + 8]
// 006a3e95  57                   push edi
// 006a3e96  6a00                 push 0
// 006a3e98  6a02                 push 2
// 006a3e9a  56                   push esi
// 006a3e9b  e880fa1800           call 0x833920
// 006a3ea0  8bf8                 mov edi, eax
// 006a3ea2  a1e813de00           mov eax, dword ptr [0xde13e8]
// 006a3ea7  50                   push eax
// 006a3ea8  6a01                 push 1
// 006a3eaa  56                   push esi
// 006a3eab  e860f91800           call 0x833810
// 006a3eb0  56                   push esi
// 006a3eb1  57                   push edi
// 006a3eb2  50                   push eax
// 006a3eb3  e8b8d31900           call 0x841270
// 006a3eb8  83c424               add esp, 0x24
// 006a3ebb  5f                   pop edi
// 006a3ebc  5e                   pop esi
// 006a3ebd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
