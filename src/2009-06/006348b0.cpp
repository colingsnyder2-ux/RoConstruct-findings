// roc 2009-06 006348b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006348b0
//
// 006348b0  56                   push esi
// 006348b1  8b742408             mov esi, dword ptr [esp + 8]
// 006348b5  57                   push edi
// 006348b6  6a00                 push 0
// 006348b8  6a02                 push 2
// 006348ba  56                   push esi
// 006348bb  e800640800           call 0x6bacc0
// 006348c0  8bf8                 mov edi, eax
// 006348c2  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 006348c7  50                   push eax
// 006348c8  6a01                 push 1
// 006348ca  56                   push esi
// 006348cb  e8e0620800           call 0x6babb0
// 006348d0  56                   push esi
// 006348d1  57                   push edi
// 006348d2  50                   push eax
// 006348d3  e8688d0800           call 0x6bd640
// 006348d8  83c424               add esp, 0x24
// 006348db  5f                   pop edi
// 006348dc  5e                   pop esi
// 006348dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
