// roc 2011-06 00619b30  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619b30
//
// 00619b30  56                   push esi
// 00619b31  8b742408             mov esi, dword ptr [esp + 8]
// 00619b35  57                   push edi
// 00619b36  6a00                 push 0
// 00619b38  6a02                 push 2
// 00619b3a  56                   push esi
// 00619b3b  e850a61400           call 0x764190
// 00619b40  8bf8                 mov edi, eax
// 00619b42  a1ecefc800           mov eax, dword ptr [0xc8efec]
// 00619b47  50                   push eax
// 00619b48  6a01                 push 1
// 00619b4a  56                   push esi
// 00619b4b  e830a51400           call 0x764080
// 00619b50  56                   push esi
// 00619b51  57                   push edi
// 00619b52  50                   push eax
// 00619b53  e878201500           call 0x76bbd0
// 00619b58  83c424               add esp, 0x24
// 00619b5b  5f                   pop edi
// 00619b5c  5e                   pop esi
// 00619b5d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
