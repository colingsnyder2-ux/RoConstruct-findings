// roc 2009-12 006a0ec0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0ec0
//
// 006a0ec0  56                   push esi
// 006a0ec1  8b742408             mov esi, dword ptr [esp + 8]
// 006a0ec5  57                   push edi
// 006a0ec6  6a00                 push 0
// 006a0ec8  6a02                 push 2
// 006a0eca  56                   push esi
// 006a0ecb  e8a0980e00           call 0x78a770
// 006a0ed0  8bf8                 mov edi, eax
// 006a0ed2  a1582bb600           mov eax, dword ptr [0xb62b58]
// 006a0ed7  50                   push eax
// 006a0ed8  6a01                 push 1
// 006a0eda  56                   push esi
// 006a0edb  e880970e00           call 0x78a660
// 006a0ee0  56                   push esi
// 006a0ee1  57                   push edi
// 006a0ee2  50                   push eax
// 006a0ee3  e8e8f50e00           call 0x7904d0
// 006a0ee8  83c424               add esp, 0x24
// 006a0eeb  5f                   pop edi
// 006a0eec  5e                   pop esi
// 006a0eed  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
