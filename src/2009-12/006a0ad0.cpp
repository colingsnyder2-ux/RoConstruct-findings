// roc 2009-12 006a0ad0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0ad0
//
// 006a0ad0  56                   push esi
// 006a0ad1  8b742408             mov esi, dword ptr [esp + 8]
// 006a0ad5  57                   push edi
// 006a0ad6  6a00                 push 0
// 006a0ad8  6a02                 push 2
// 006a0ada  56                   push esi
// 006a0adb  e8909c0e00           call 0x78a770
// 006a0ae0  8bf8                 mov edi, eax
// 006a0ae2  a1542bb600           mov eax, dword ptr [0xb62b54]
// 006a0ae7  50                   push eax
// 006a0ae8  6a01                 push 1
// 006a0aea  56                   push esi
// 006a0aeb  e8709b0e00           call 0x78a660
// 006a0af0  56                   push esi
// 006a0af1  57                   push edi
// 006a0af2  50                   push eax
// 006a0af3  e808390f00           call 0x794400
// 006a0af8  83c424               add esp, 0x24
// 006a0afb  5f                   pop edi
// 006a0afc  5e                   pop esi
// 006a0afd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
