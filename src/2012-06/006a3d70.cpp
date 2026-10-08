// roc 2012-06 006a3d70  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3d70
//
// 006a3d70  56                   push esi
// 006a3d71  8b742408             mov esi, dword ptr [esp + 8]
// 006a3d75  57                   push edi
// 006a3d76  6a00                 push 0
// 006a3d78  6a02                 push 2
// 006a3d7a  56                   push esi
// 006a3d7b  e8a0fb1800           call 0x833920
// 006a3d80  8bf8                 mov edi, eax
// 006a3d82  a1e013de00           mov eax, dword ptr [0xde13e0]
// 006a3d87  50                   push eax
// 006a3d88  6a01                 push 1
// 006a3d8a  56                   push esi
// 006a3d8b  e880fa1800           call 0x833810
// 006a3d90  56                   push esi
// 006a3d91  57                   push edi
// 006a3d92  50                   push eax
// 006a3d93  e878691900           call 0x83a710
// 006a3d98  83c424               add esp, 0x24
// 006a3d9b  5f                   pop edi
// 006a3d9c  5e                   pop esi
// 006a3d9d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
