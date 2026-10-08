// roc 2011-06 00619eb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619eb0
//
// 00619eb0  56                   push esi
// 00619eb1  8b742408             mov esi, dword ptr [esp + 8]
// 00619eb5  57                   push edi
// 00619eb6  6a00                 push 0
// 00619eb8  6a02                 push 2
// 00619eba  56                   push esi
// 00619ebb  e8d0a21400           call 0x764190
// 00619ec0  8bf8                 mov edi, eax
// 00619ec2  a1fcefc800           mov eax, dword ptr [0xc8effc]
// 00619ec7  50                   push eax
// 00619ec8  6a01                 push 1
// 00619eca  56                   push esi
// 00619ecb  e8b0a11400           call 0x764080
// 00619ed0  56                   push esi
// 00619ed1  57                   push edi
// 00619ed2  50                   push eax
// 00619ed3  e888731500           call 0x771260
// 00619ed8  83c424               add esp, 0x24
// 00619edb  5f                   pop edi
// 00619edc  5e                   pop esi
// 00619edd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
