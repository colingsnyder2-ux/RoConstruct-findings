// roc 2012-06 006a3e30  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3e30
//
// 006a3e30  56                   push esi
// 006a3e31  8b742408             mov esi, dword ptr [esp + 8]
// 006a3e35  57                   push edi
// 006a3e36  6a00                 push 0
// 006a3e38  6a02                 push 2
// 006a3e3a  56                   push esi
// 006a3e3b  e8e0fa1800           call 0x833920
// 006a3e40  8bf8                 mov edi, eax
// 006a3e42  a1d013de00           mov eax, dword ptr [0xde13d0]
// 006a3e47  50                   push eax
// 006a3e48  6a01                 push 1
// 006a3e4a  56                   push esi
// 006a3e4b  e8c0f91800           call 0x833810
// 006a3e50  56                   push esi
// 006a3e51  57                   push edi
// 006a3e52  50                   push eax
// 006a3e53  e8c8a41900           call 0x83e320
// 006a3e58  83c424               add esp, 0x24
// 006a3e5b  5f                   pop edi
// 006a3e5c  5e                   pop esi
// 006a3e5d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
