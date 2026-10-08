// roc 2008-06 005a9670  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9670
//
// 005a9670  56                   push esi
// 005a9671  8b742408             mov esi, dword ptr [esp + 8]
// 005a9675  57                   push edi
// 005a9676  6a00                 push 0
// 005a9678  6a02                 push 2
// 005a967a  56                   push esi
// 005a967b  e840800600           call 0x6116c0
// 005a9680  8bf8                 mov edi, eax
// 005a9682  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 005a9687  50                   push eax
// 005a9688  6a01                 push 1
// 005a968a  56                   push esi
// 005a968b  e8207f0600           call 0x6115b0
// 005a9690  56                   push esi
// 005a9691  57                   push edi
// 005a9692  50                   push eax
// 005a9693  e848390700           call 0x61cfe0
// 005a9698  83c424               add esp, 0x24
// 005a969b  5f                   pop edi
// 005a969c  5e                   pop esi
// 005a969d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
