// roc 2011-06 00619bf0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619bf0
//
// 00619bf0  56                   push esi
// 00619bf1  8b742408             mov esi, dword ptr [esp + 8]
// 00619bf5  57                   push edi
// 00619bf6  6a00                 push 0
// 00619bf8  6a02                 push 2
// 00619bfa  56                   push esi
// 00619bfb  e890a51400           call 0x764190
// 00619c00  8bf8                 mov edi, eax
// 00619c02  a1c0f4c800           mov eax, dword ptr [0xc8f4c0]
// 00619c07  50                   push eax
// 00619c08  6a01                 push 1
// 00619c0a  56                   push esi
// 00619c0b  e870a41400           call 0x764080
// 00619c10  56                   push esi
// 00619c11  57                   push edi
// 00619c12  50                   push eax
// 00619c13  e898cb1500           call 0x7767b0
// 00619c18  83c424               add esp, 0x24
// 00619c1b  5f                   pop edi
// 00619c1c  5e                   pop esi
// 00619c1d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
