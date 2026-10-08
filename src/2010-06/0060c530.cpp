// roc 2010-06 0060c530  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c530
//
// 0060c530  56                   push esi
// 0060c531  8b742408             mov esi, dword ptr [esp + 8]
// 0060c535  57                   push edi
// 0060c536  6a00                 push 0
// 0060c538  6a02                 push 2
// 0060c53a  56                   push esi
// 0060c53b  e8e0691100           call 0x722f20
// 0060c540  8bf8                 mov edi, eax
// 0060c542  a1b0d8bc00           mov eax, dword ptr [0xbcd8b0]
// 0060c547  50                   push eax
// 0060c548  6a01                 push 1
// 0060c54a  56                   push esi
// 0060c54b  e8c0681100           call 0x722e10
// 0060c550  56                   push esi
// 0060c551  57                   push edi
// 0060c552  50                   push eax
// 0060c553  e8b8da0a00           call 0x6ba010
// 0060c558  83c424               add esp, 0x24
// 0060c55b  5f                   pop edi
// 0060c55c  5e                   pop esi
// 0060c55d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
