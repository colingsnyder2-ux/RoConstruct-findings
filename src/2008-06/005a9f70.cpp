// roc 2008-06 005a9f70  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9f70
//
// 005a9f70  56                   push esi
// 005a9f71  8b742408             mov esi, dword ptr [esp + 8]
// 005a9f75  57                   push edi
// 005a9f76  6a00                 push 0
// 005a9f78  6a02                 push 2
// 005a9f7a  56                   push esi
// 005a9f7b  e840770600           call 0x6116c0
// 005a9f80  8bf8                 mov edi, eax
// 005a9f82  a1d8b19500           mov eax, dword ptr [0x95b1d8]
// 005a9f87  50                   push eax
// 005a9f88  6a01                 push 1
// 005a9f8a  56                   push esi
// 005a9f8b  e820760600           call 0x6115b0
// 005a9f90  56                   push esi
// 005a9f91  57                   push edi
// 005a9f92  50                   push eax
// 005a9f93  e828500700           call 0x61efc0
// 005a9f98  83c424               add esp, 0x24
// 005a9f9b  5f                   pop edi
// 005a9f9c  5e                   pop esi
// 005a9f9d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
