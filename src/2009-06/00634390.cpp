// roc 2009-06 00634390  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634390
//
// 00634390  56                   push esi
// 00634391  8b742408             mov esi, dword ptr [esp + 8]
// 00634395  57                   push edi
// 00634396  6a00                 push 0
// 00634398  6a02                 push 2
// 0063439a  56                   push esi
// 0063439b  e820690800           call 0x6bacc0
// 006343a0  8bf8                 mov edi, eax
// 006343a2  a1fc2aa200           mov eax, dword ptr [0xa22afc]
// 006343a7  50                   push eax
// 006343a8  6a01                 push 1
// 006343aa  56                   push esi
// 006343ab  e800680800           call 0x6babb0
// 006343b0  56                   push esi
// 006343b1  57                   push edi
// 006343b2  50                   push eax
// 006343b3  e868b50800           call 0x6bf920
// 006343b8  83c424               add esp, 0x24
// 006343bb  5f                   pop edi
// 006343bc  5e                   pop esi
// 006343bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
