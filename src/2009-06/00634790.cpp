// roc 2009-06 00634790  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634790
//
// 00634790  56                   push esi
// 00634791  8b742408             mov esi, dword ptr [esp + 8]
// 00634795  57                   push edi
// 00634796  6a00                 push 0
// 00634798  6a02                 push 2
// 0063479a  56                   push esi
// 0063479b  e820650800           call 0x6bacc0
// 006347a0  8bf8                 mov edi, eax
// 006347a2  a14ce2a100           mov eax, dword ptr [0xa1e24c]
// 006347a7  50                   push eax
// 006347a8  6a01                 push 1
// 006347aa  56                   push esi
// 006347ab  e800640800           call 0x6babb0
// 006347b0  56                   push esi
// 006347b1  57                   push edi
// 006347b2  50                   push eax
// 006347b3  e8480a0600           call 0x695200
// 006347b8  83c424               add esp, 0x24
// 006347bb  5f                   pop edi
// 006347bc  5e                   pop esi
// 006347bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
