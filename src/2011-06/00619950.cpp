// roc 2011-06 00619950  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619950
//
// 00619950  56                   push esi
// 00619951  8b742408             mov esi, dword ptr [esp + 8]
// 00619955  57                   push edi
// 00619956  6a00                 push 0
// 00619958  6a02                 push 2
// 0061995a  56                   push esi
// 0061995b  e830a81400           call 0x764190
// 00619960  8bf8                 mov edi, eax
// 00619962  a1d4efc800           mov eax, dword ptr [0xc8efd4]
// 00619967  50                   push eax
// 00619968  6a01                 push 1
// 0061996a  56                   push esi
// 0061996b  e810a71400           call 0x764080
// 00619970  56                   push esi
// 00619971  57                   push edi
// 00619972  50                   push eax
// 00619973  e8c8441500           call 0x76de40
// 00619978  83c424               add esp, 0x24
// 0061997b  5f                   pop edi
// 0061997c  5e                   pop esi
// 0061997d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
