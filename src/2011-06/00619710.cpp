// roc 2011-06 00619710  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619710
//
// 00619710  56                   push esi
// 00619711  8b742408             mov esi, dword ptr [esp + 8]
// 00619715  57                   push edi
// 00619716  6a00                 push 0
// 00619718  6a02                 push 2
// 0061971a  56                   push esi
// 0061971b  e870aa1400           call 0x764190
// 00619720  8bf8                 mov edi, eax
// 00619722  a164d5c400           mov eax, dword ptr [0xc4d564]
// 00619727  50                   push eax
// 00619728  6a01                 push 1
// 0061972a  56                   push esi
// 0061972b  e850a91400           call 0x764080
// 00619730  56                   push esi
// 00619731  57                   push edi
// 00619732  50                   push eax
// 00619733  e8b8140100           call 0x62abf0
// 00619738  83c424               add esp, 0x24
// 0061973b  5f                   pop edi
// 0061973c  5e                   pop esi
// 0061973d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
