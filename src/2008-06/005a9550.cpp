// roc 2008-06 005a9550  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9550
//
// 005a9550  56                   push esi
// 005a9551  8b742408             mov esi, dword ptr [esp + 8]
// 005a9555  57                   push edi
// 005a9556  6a00                 push 0
// 005a9558  6a02                 push 2
// 005a955a  56                   push esi
// 005a955b  e860810600           call 0x6116c0
// 005a9560  8bf8                 mov edi, eax
// 005a9562  a1c8b19500           mov eax, dword ptr [0x95b1c8]
// 005a9567  50                   push eax
// 005a9568  6a01                 push 1
// 005a956a  56                   push esi
// 005a956b  e840800600           call 0x6115b0
// 005a9570  56                   push esi
// 005a9571  57                   push edi
// 005a9572  50                   push eax
// 005a9573  e818510700           call 0x61e690
// 005a9578  83c424               add esp, 0x24
// 005a957b  5f                   pop edi
// 005a957c  5e                   pop esi
// 005a957d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
