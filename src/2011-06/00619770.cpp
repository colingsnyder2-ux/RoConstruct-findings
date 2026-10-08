// roc 2011-06 00619770  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619770
//
// 00619770  56                   push esi
// 00619771  8b742408             mov esi, dword ptr [esp + 8]
// 00619775  57                   push edi
// 00619776  6a00                 push 0
// 00619778  6a02                 push 2
// 0061977a  56                   push esi
// 0061977b  e810aa1400           call 0x764190
// 00619780  8bf8                 mov edi, eax
// 00619782  a108f0c800           mov eax, dword ptr [0xc8f008]
// 00619787  50                   push eax
// 00619788  6a01                 push 1
// 0061978a  56                   push esi
// 0061978b  e8f0a81400           call 0x764080
// 00619790  56                   push esi
// 00619791  57                   push edi
// 00619792  50                   push eax
// 00619793  e8b8991500           call 0x773150
// 00619798  83c424               add esp, 0x24
// 0061979b  5f                   pop edi
// 0061979c  5e                   pop esi
// 0061979d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
