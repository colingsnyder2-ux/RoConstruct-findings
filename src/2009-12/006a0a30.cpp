// roc 2009-12 006a0a30  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0a30
//
// 006a0a30  56                   push esi
// 006a0a31  8b742408             mov esi, dword ptr [esp + 8]
// 006a0a35  57                   push edi
// 006a0a36  6a00                 push 0
// 006a0a38  6a02                 push 2
// 006a0a3a  56                   push esi
// 006a0a3b  e8309d0e00           call 0x78a770
// 006a0a40  8bf8                 mov edi, eax
// 006a0a42  a1802bb600           mov eax, dword ptr [0xb62b80]
// 006a0a47  50                   push eax
// 006a0a48  6a01                 push 1
// 006a0a4a  56                   push esi
// 006a0a4b  e8109c0e00           call 0x78a660
// 006a0a50  56                   push esi
// 006a0a51  57                   push edi
// 006a0a52  50                   push eax
// 006a0a53  e828570f00           call 0x796180
// 006a0a58  83c424               add esp, 0x24
// 006a0a5b  5f                   pop edi
// 006a0a5c  5e                   pop esi
// 006a0a5d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
