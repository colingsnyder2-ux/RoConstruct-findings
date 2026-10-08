// roc 2011-06 00618220  unit: RBX::ScriptContext  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00618220
//
// 00618220  56                   push esi
// 00618221  8b742408             mov esi, dword ptr [esp + 8]
// 00618225  57                   push edi
// 00618226  6a00                 push 0
// 00618228  6a02                 push 2
// 0061822a  56                   push esi
// 0061822b  e860bf1400           call 0x764190
// 00618230  8bf8                 mov edi, eax
// 00618232  a178e7c800           mov eax, dword ptr [0xc8e778]
// 00618237  50                   push eax
// 00618238  6a01                 push 1
// 0061823a  56                   push esi
// 0061823b  e840be1400           call 0x764080
// 00618240  56                   push esi
// 00618241  57                   push edi
// 00618242  50                   push eax
// 00618243  e8381f1500           call 0x76a180
// 00618248  83c424               add esp, 0x24
// 0061824b  5f                   pop edi
// 0061824c  5e                   pop esi
// 0061824d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
