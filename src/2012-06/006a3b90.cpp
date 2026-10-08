// roc 2012-06 006a3b90  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3b90
//
// 006a3b90  56                   push esi
// 006a3b91  8b742408             mov esi, dword ptr [esp + 8]
// 006a3b95  57                   push edi
// 006a3b96  6a00                 push 0
// 006a3b98  6a02                 push 2
// 006a3b9a  56                   push esi
// 006a3b9b  e880fd1800           call 0x833920
// 006a3ba0  8bf8                 mov edi, eax
// 006a3ba2  a1cc13de00           mov eax, dword ptr [0xde13cc]
// 006a3ba7  50                   push eax
// 006a3ba8  6a01                 push 1
// 006a3baa  56                   push esi
// 006a3bab  e860fc1800           call 0x833810
// 006a3bb0  56                   push esi
// 006a3bb1  57                   push edi
// 006a3bb2  50                   push eax
// 006a3bb3  e8e8a01900           call 0x83dca0
// 006a3bb8  83c424               add esp, 0x24
// 006a3bbb  5f                   pop edi
// 006a3bbc  5e                   pop esi
// 006a3bbd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
