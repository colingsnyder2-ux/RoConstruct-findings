// roc 2011-06 00619a10  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619a10
//
// 00619a10  56                   push esi
// 00619a11  8b742408             mov esi, dword ptr [esp + 8]
// 00619a15  57                   push edi
// 00619a16  6a00                 push 0
// 00619a18  6a02                 push 2
// 00619a1a  56                   push esi
// 00619a1b  e870a71400           call 0x764190
// 00619a20  8bf8                 mov edi, eax
// 00619a22  a1e0efc800           mov eax, dword ptr [0xc8efe0]
// 00619a27  50                   push eax
// 00619a28  6a01                 push 1
// 00619a2a  56                   push esi
// 00619a2b  e850a61400           call 0x764080
// 00619a30  56                   push esi
// 00619a31  57                   push edi
// 00619a32  50                   push eax
// 00619a33  e8781e1500           call 0x76b8b0
// 00619a38  83c424               add esp, 0x24
// 00619a3b  5f                   pop edi
// 00619a3c  5e                   pop esi
// 00619a3d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
