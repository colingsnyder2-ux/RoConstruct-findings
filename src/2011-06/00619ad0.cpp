// roc 2011-06 00619ad0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619ad0
//
// 00619ad0  56                   push esi
// 00619ad1  8b742408             mov esi, dword ptr [esp + 8]
// 00619ad5  57                   push edi
// 00619ad6  6a00                 push 0
// 00619ad8  6a02                 push 2
// 00619ada  56                   push esi
// 00619adb  e8b0a61400           call 0x764190
// 00619ae0  8bf8                 mov edi, eax
// 00619ae2  a1e8efc800           mov eax, dword ptr [0xc8efe8]
// 00619ae7  50                   push eax
// 00619ae8  6a01                 push 1
// 00619aea  56                   push esi
// 00619aeb  e890a51400           call 0x764080
// 00619af0  56                   push esi
// 00619af1  57                   push edi
// 00619af2  50                   push eax
// 00619af3  e8c81e1500           call 0x76b9c0
// 00619af8  83c424               add esp, 0x24
// 00619afb  5f                   pop edi
// 00619afc  5e                   pop esi
// 00619afd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
