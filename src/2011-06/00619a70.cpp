// roc 2011-06 00619a70  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619a70
//
// 00619a70  56                   push esi
// 00619a71  8b742408             mov esi, dword ptr [esp + 8]
// 00619a75  57                   push edi
// 00619a76  6a00                 push 0
// 00619a78  6a02                 push 2
// 00619a7a  56                   push esi
// 00619a7b  e810a71400           call 0x764190
// 00619a80  8bf8                 mov edi, eax
// 00619a82  a1e4efc800           mov eax, dword ptr [0xc8efe4]
// 00619a87  50                   push eax
// 00619a88  6a01                 push 1
// 00619a8a  56                   push esi
// 00619a8b  e8f0a51400           call 0x764080
// 00619a90  56                   push esi
// 00619a91  57                   push edi
// 00619a92  50                   push eax
// 00619a93  e818671500           call 0x7701b0
// 00619a98  83c424               add esp, 0x24
// 00619a9b  5f                   pop edi
// 00619a9c  5e                   pop esi
// 00619a9d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
