// roc 2008-06 005a9e60  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9e60
//
// 005a9e60  56                   push esi
// 005a9e61  8b742408             mov esi, dword ptr [esp + 8]
// 005a9e65  57                   push edi
// 005a9e66  6a00                 push 0
// 005a9e68  6a02                 push 2
// 005a9e6a  56                   push esi
// 005a9e6b  e850780600           call 0x6116c0
// 005a9e70  8bf8                 mov edi, eax
// 005a9e72  a1d4b19500           mov eax, dword ptr [0x95b1d4]
// 005a9e77  50                   push eax
// 005a9e78  6a01                 push 1
// 005a9e7a  56                   push esi
// 005a9e7b  e830770600           call 0x6115b0
// 005a9e80  56                   push esi
// 005a9e81  57                   push edi
// 005a9e82  50                   push eax
// 005a9e83  e868520700           call 0x61f0f0
// 005a9e88  83c424               add esp, 0x24
// 005a9e8b  5f                   pop edi
// 005a9e8c  5e                   pop esi
// 005a9e8d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
