// roc 2009-12 006a0d70  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0d70
//
// 006a0d70  56                   push esi
// 006a0d71  8b742408             mov esi, dword ptr [esp + 8]
// 006a0d75  57                   push edi
// 006a0d76  6a00                 push 0
// 006a0d78  6a02                 push 2
// 006a0d7a  56                   push esi
// 006a0d7b  e8f0990e00           call 0x78a770
// 006a0d80  8bf8                 mov edi, eax
// 006a0d82  a14c2bb600           mov eax, dword ptr [0xb62b4c]
// 006a0d87  50                   push eax
// 006a0d88  6a01                 push 1
// 006a0d8a  56                   push esi
// 006a0d8b  e8d0980e00           call 0x78a660
// 006a0d90  56                   push esi
// 006a0d91  57                   push edi
// 006a0d92  50                   push eax
// 006a0d93  e898180f00           call 0x792630
// 006a0d98  83c424               add esp, 0x24
// 006a0d9b  5f                   pop edi
// 006a0d9c  5e                   pop esi
// 006a0d9d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
