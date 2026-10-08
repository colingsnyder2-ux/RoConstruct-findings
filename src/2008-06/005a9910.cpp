// roc 2008-06 005a9910  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9910
//
// 005a9910  56                   push esi
// 005a9911  8b742408             mov esi, dword ptr [esp + 8]
// 005a9915  57                   push edi
// 005a9916  6a00                 push 0
// 005a9918  6a02                 push 2
// 005a991a  56                   push esi
// 005a991b  e8a07d0600           call 0x6116c0
// 005a9920  8bf8                 mov edi, eax
// 005a9922  a1bcb19500           mov eax, dword ptr [0x95b1bc]
// 005a9927  50                   push eax
// 005a9928  6a01                 push 1
// 005a992a  56                   push esi
// 005a992b  e8807c0600           call 0x6115b0
// 005a9930  56                   push esi
// 005a9931  57                   push edi
// 005a9932  50                   push eax
// 005a9933  e8882f0700           call 0x61c8c0
// 005a9938  83c424               add esp, 0x24
// 005a993b  5f                   pop edi
// 005a993c  5e                   pop esi
// 005a993d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
