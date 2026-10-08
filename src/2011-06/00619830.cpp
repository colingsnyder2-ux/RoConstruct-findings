// roc 2011-06 00619830  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619830
//
// 00619830  56                   push esi
// 00619831  8b742408             mov esi, dword ptr [esp + 8]
// 00619835  57                   push edi
// 00619836  6a00                 push 0
// 00619838  6a02                 push 2
// 0061983a  56                   push esi
// 0061983b  e850a91400           call 0x764190
// 00619840  8bf8                 mov edi, eax
// 00619842  a1c8efc800           mov eax, dword ptr [0xc8efc8]
// 00619847  50                   push eax
// 00619848  6a01                 push 1
// 0061984a  56                   push esi
// 0061984b  e830a81400           call 0x764080
// 00619850  56                   push esi
// 00619851  57                   push edi
// 00619852  50                   push eax
// 00619853  e858321500           call 0x76cab0
// 00619858  83c424               add esp, 0x24
// 0061985b  5f                   pop edi
// 0061985c  5e                   pop esi
// 0061985d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
