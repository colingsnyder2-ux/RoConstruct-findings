// roc 2011-06 00619b90  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619b90
//
// 00619b90  56                   push esi
// 00619b91  8b742408             mov esi, dword ptr [esp + 8]
// 00619b95  57                   push edi
// 00619b96  6a00                 push 0
// 00619b98  6a02                 push 2
// 00619b9a  56                   push esi
// 00619b9b  e8f0a51400           call 0x764190
// 00619ba0  8bf8                 mov edi, eax
// 00619ba2  a1d8efc800           mov eax, dword ptr [0xc8efd8]
// 00619ba7  50                   push eax
// 00619ba8  6a01                 push 1
// 00619baa  56                   push esi
// 00619bab  e8d0a41400           call 0x764080
// 00619bb0  56                   push esi
// 00619bb1  57                   push edi
// 00619bb2  50                   push eax
// 00619bb3  e888491500           call 0x76e540
// 00619bb8  83c424               add esp, 0x24
// 00619bbb  5f                   pop edi
// 00619bbc  5e                   pop esi
// 00619bbd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
