// roc 2012-06 006a3c50  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3c50
//
// 006a3c50  56                   push esi
// 006a3c51  8b742408             mov esi, dword ptr [esp + 8]
// 006a3c55  57                   push edi
// 006a3c56  6a00                 push 0
// 006a3c58  6a02                 push 2
// 006a3c5a  56                   push esi
// 006a3c5b  e8c0fc1800           call 0x833920
// 006a3c60  8bf8                 mov edi, eax
// 006a3c62  a1b013de00           mov eax, dword ptr [0xde13b0]
// 006a3c67  50                   push eax
// 006a3c68  6a01                 push 1
// 006a3c6a  56                   push esi
// 006a3c6b  e8a0fb1800           call 0x833810
// 006a3c70  56                   push esi
// 006a3c71  57                   push edi
// 006a3c72  50                   push eax
// 006a3c73  e868651900           call 0x83a1e0
// 006a3c78  83c424               add esp, 0x24
// 006a3c7b  5f                   pop edi
// 006a3c7c  5e                   pop esi
// 006a3c7d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
