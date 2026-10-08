// roc 2012-06 006a3ad0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3ad0
//
// 006a3ad0  56                   push esi
// 006a3ad1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3ad5  57                   push edi
// 006a3ad6  6a00                 push 0
// 006a3ad8  6a02                 push 2
// 006a3ada  56                   push esi
// 006a3adb  e840fe1800           call 0x833920
// 006a3ae0  8bf8                 mov edi, eax
// 006a3ae2  a1c413de00           mov eax, dword ptr [0xde13c4]
// 006a3ae7  50                   push eax
// 006a3ae8  6a01                 push 1
// 006a3aea  56                   push esi
// 006a3aeb  e820fd1800           call 0x833810
// 006a3af0  56                   push esi
// 006a3af1  57                   push edi
// 006a3af2  50                   push eax
// 006a3af3  e818681900           call 0x83a310
// 006a3af8  83c424               add esp, 0x24
// 006a3afb  5f                   pop edi
// 006a3afc  5e                   pop esi
// 006a3afd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
