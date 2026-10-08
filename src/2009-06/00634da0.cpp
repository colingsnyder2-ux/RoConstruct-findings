// roc 2009-06 00634da0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634da0
//
// 00634da0  56                   push esi
// 00634da1  8b742408             mov esi, dword ptr [esp + 8]
// 00634da5  57                   push edi
// 00634da6  6a00                 push 0
// 00634da8  6a02                 push 2
// 00634daa  56                   push esi
// 00634dab  e8105f0800           call 0x6bacc0
// 00634db0  8bf8                 mov edi, eax
// 00634db2  a1082ba200           mov eax, dword ptr [0xa22b08]
// 00634db7  50                   push eax
// 00634db8  6a01                 push 1
// 00634dba  56                   push esi
// 00634dbb  e8f05d0800           call 0x6babb0
// 00634dc0  56                   push esi
// 00634dc1  57                   push edi
// 00634dc2  50                   push eax
// 00634dc3  e858b40800           call 0x6c0220
// 00634dc8  83c424               add esp, 0x24
// 00634dcb  5f                   pop edi
// 00634dcc  5e                   pop esi
// 00634dcd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
