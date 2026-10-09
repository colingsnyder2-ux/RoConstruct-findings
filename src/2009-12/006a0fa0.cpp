// roc 2009-12 006a0fa0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0fa0
//
// 006a0fa0  56                   push esi
// 006a0fa1  8b742408             mov esi, dword ptr [esp + 8]
// 006a0fa5  57                   push edi
// 006a0fa6  6a00                 push 0
// 006a0fa8  6a02                 push 2
// 006a0faa  56                   push esi
// 006a0fab  e8c0970e00           call 0x78a770
// 006a0fb0  8bf8                 mov edi, eax
// 006a0fb2  a15c2bb600           mov eax, dword ptr [0xb62b5c]
// 006a0fb7  50                   push eax
// 006a0fb8  6a01                 push 1
// 006a0fba  56                   push esi
// 006a0fbb  e8a0960e00           call 0x78a660
// 006a0fc0  56                   push esi
// 006a0fc1  57                   push edi
// 006a0fc2  50                   push eax
// 006a0fc3  e8983e0f00           call 0x794e60
// 006a0fc8  83c424               add esp, 0x24
// 006a0fcb  5f                   pop edi
// 006a0fcc  5e                   pop esi
// 006a0fcd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
