// roc 2009-06 00634810  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634810
//
// 00634810  56                   push esi
// 00634811  8b742408             mov esi, dword ptr [esp + 8]
// 00634815  57                   push edi
// 00634816  6a00                 push 0
// 00634818  6a02                 push 2
// 0063481a  56                   push esi
// 0063481b  e8a0640800           call 0x6bacc0
// 00634820  8bf8                 mov edi, eax
// 00634822  a1182ba200           mov eax, dword ptr [0xa22b18]
// 00634827  50                   push eax
// 00634828  6a01                 push 1
// 0063482a  56                   push esi
// 0063482b  e880630800           call 0x6babb0
// 00634830  56                   push esi
// 00634831  57                   push edi
// 00634832  50                   push eax
// 00634833  e858c60800           call 0x6c0e90
// 00634838  83c424               add esp, 0x24
// 0063483b  5f                   pop edi
// 0063483c  5e                   pop esi
// 0063483d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
