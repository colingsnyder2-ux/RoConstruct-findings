// roc 2012-06 006a3bf0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3bf0
//
// 006a3bf0  56                   push esi
// 006a3bf1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3bf5  57                   push edi
// 006a3bf6  6a00                 push 0
// 006a3bf8  6a02                 push 2
// 006a3bfa  56                   push esi
// 006a3bfb  e820fd1800           call 0x833920
// 006a3c00  8bf8                 mov edi, eax
// 006a3c02  a1c813de00           mov eax, dword ptr [0xde13c8]
// 006a3c07  50                   push eax
// 006a3c08  6a01                 push 1
// 006a3c0a  56                   push esi
// 006a3c0b  e800fc1800           call 0x833810
// 006a3c10  56                   push esi
// 006a3c11  57                   push edi
// 006a3c12  50                   push eax
// 006a3c13  e898681900           call 0x83a4b0
// 006a3c18  83c424               add esp, 0x24
// 006a3c1b  5f                   pop edi
// 006a3c1c  5e                   pop esi
// 006a3c1d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
