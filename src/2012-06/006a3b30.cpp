// roc 2012-06 006a3b30  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3b30
//
// 006a3b30  56                   push esi
// 006a3b31  8b742408             mov esi, dword ptr [esp + 8]
// 006a3b35  57                   push edi
// 006a3b36  6a00                 push 0
// 006a3b38  6a02                 push 2
// 006a3b3a  56                   push esi
// 006a3b3b  e8e0fd1800           call 0x833920
// 006a3b40  8bf8                 mov edi, eax
// 006a3b42  a1b413de00           mov eax, dword ptr [0xde13b4]
// 006a3b47  50                   push eax
// 006a3b48  6a01                 push 1
// 006a3b4a  56                   push esi
// 006a3b4b  e8c0fc1800           call 0x833810
// 006a3b50  56                   push esi
// 006a3b51  57                   push edi
// 006a3b52  50                   push eax
// 006a3b53  e8e87c1900           call 0x83b840
// 006a3b58  83c424               add esp, 0x24
// 006a3b5b  5f                   pop edi
// 006a3b5c  5e                   pop esi
// 006a3b5d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
