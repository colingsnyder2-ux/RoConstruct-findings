// roc 2011-06 00619890  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619890
//
// 00619890  56                   push esi
// 00619891  8b742408             mov esi, dword ptr [esp + 8]
// 00619895  57                   push edi
// 00619896  6a00                 push 0
// 00619898  6a02                 push 2
// 0061989a  56                   push esi
// 0061989b  e8f0a81400           call 0x764190
// 006198a0  8bf8                 mov edi, eax
// 006198a2  a1ccefc800           mov eax, dword ptr [0xc8efcc]
// 006198a7  50                   push eax
// 006198a8  6a01                 push 1
// 006198aa  56                   push esi
// 006198ab  e8d0a71400           call 0x764080
// 006198b0  56                   push esi
// 006198b1  57                   push edi
// 006198b2  50                   push eax
// 006198b3  e8b83b1500           call 0x76d470
// 006198b8  83c424               add esp, 0x24
// 006198bb  5f                   pop edi
// 006198bc  5e                   pop esi
// 006198bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
