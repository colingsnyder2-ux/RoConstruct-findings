// roc 2009-12 006a0e40  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a0e40
//
// 006a0e40  56                   push esi
// 006a0e41  8b742408             mov esi, dword ptr [esp + 8]
// 006a0e45  57                   push edi
// 006a0e46  6a00                 push 0
// 006a0e48  6a02                 push 2
// 006a0e4a  56                   push esi
// 006a0e4b  e820990e00           call 0x78a770
// 006a0e50  8bf8                 mov edi, eax
// 006a0e52  a13c2bb600           mov eax, dword ptr [0xb62b3c]
// 006a0e57  50                   push eax
// 006a0e58  6a01                 push 1
// 006a0e5a  56                   push esi
// 006a0e5b  e800980e00           call 0x78a660
// 006a0e60  56                   push esi
// 006a0e61  57                   push edi
// 006a0e62  50                   push eax
// 006a0e63  e838f50e00           call 0x7903a0
// 006a0e68  83c424               add esp, 0x24
// 006a0e6b  5f                   pop edi
// 006a0e6c  5e                   pop esi
// 006a0e6d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
