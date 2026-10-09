// roc 2009-12 006a0cd0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0cd0
//
// 006a0cd0  56                   push esi
// 006a0cd1  8b742408             mov esi, dword ptr [esp + 8]
// 006a0cd5  57                   push edi
// 006a0cd6  6a00                 push 0
// 006a0cd8  6a02                 push 2
// 006a0cda  56                   push esi
// 006a0cdb  e8909a0e00           call 0x78a770
// 006a0ce0  8bf8                 mov edi, eax
// 006a0ce2  a1402bb600           mov eax, dword ptr [0xb62b40]
// 006a0ce7  50                   push eax
// 006a0ce8  6a01                 push 1
// 006a0cea  56                   push esi
// 006a0ceb  e870990e00           call 0x78a660
// 006a0cf0  56                   push esi
// 006a0cf1  57                   push edi
// 006a0cf2  50                   push eax
// 006a0cf3  e8c8030f00           call 0x7910c0
// 006a0cf8  83c424               add esp, 0x24
// 006a0cfb  5f                   pop edi
// 006a0cfc  5e                   pop esi
// 006a0cfd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
