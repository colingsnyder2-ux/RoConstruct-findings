// roc 2009-06 00634eb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634eb0
//
// 00634eb0  56                   push esi
// 00634eb1  8b742408             mov esi, dword ptr [esp + 8]
// 00634eb5  57                   push edi
// 00634eb6  6a00                 push 0
// 00634eb8  6a02                 push 2
// 00634eba  56                   push esi
// 00634ebb  e8005e0800           call 0x6bacc0
// 00634ec0  8bf8                 mov edi, eax
// 00634ec2  a10c2ba200           mov eax, dword ptr [0xa22b0c]
// 00634ec7  50                   push eax
// 00634ec8  6a01                 push 1
// 00634eca  56                   push esi
// 00634ecb  e8e05c0800           call 0x6babb0
// 00634ed0  56                   push esi
// 00634ed1  57                   push edi
// 00634ed2  50                   push eax
// 00634ed3  e848b20800           call 0x6c0120
// 00634ed8  83c424               add esp, 0x24
// 00634edb  5f                   pop edi
// 00634edc  5e                   pop esi
// 00634edd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
