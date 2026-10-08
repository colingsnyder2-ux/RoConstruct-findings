// roc 2012-06 006a3a70  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3a70
//
// 006a3a70  56                   push esi
// 006a3a71  8b742408             mov esi, dword ptr [esp + 8]
// 006a3a75  57                   push edi
// 006a3a76  6a00                 push 0
// 006a3a78  6a02                 push 2
// 006a3a7a  56                   push esi
// 006a3a7b  e8a0fe1800           call 0x833920
// 006a3a80  8bf8                 mov edi, eax
// 006a3a82  a1c013de00           mov eax, dword ptr [0xde13c0]
// 006a3a87  50                   push eax
// 006a3a88  6a01                 push 1
// 006a3a8a  56                   push esi
// 006a3a8b  e880fd1800           call 0x833810
// 006a3a90  56                   push esi
// 006a3a91  57                   push edi
// 006a3a92  50                   push eax
// 006a3a93  e8188d1900           call 0x83c7b0
// 006a3a98  83c424               add esp, 0x24
// 006a3a9b  5f                   pop edi
// 006a3a9c  5e                   pop esi
// 006a3a9d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
