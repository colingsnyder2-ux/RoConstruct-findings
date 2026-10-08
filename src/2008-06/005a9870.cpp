// roc 2008-06 005a9870  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9870
//
// 005a9870  56                   push esi
// 005a9871  8b742408             mov esi, dword ptr [esp + 8]
// 005a9875  57                   push edi
// 005a9876  6a00                 push 0
// 005a9878  6a02                 push 2
// 005a987a  56                   push esi
// 005a987b  e8407e0600           call 0x6116c0
// 005a9880  8bf8                 mov edi, eax
// 005a9882  a130979400           mov eax, dword ptr [0x949730]
// 005a9887  50                   push eax
// 005a9888  6a01                 push 1
// 005a988a  56                   push esi
// 005a988b  e8207d0600           call 0x6115b0
// 005a9890  56                   push esi
// 005a9891  57                   push edi
// 005a9892  50                   push eax
// 005a9893  e848a3feff           call 0x593be0
// 005a9898  83c424               add esp, 0x24
// 005a989b  5f                   pop edi
// 005a989c  5e                   pop esi
// 005a989d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
