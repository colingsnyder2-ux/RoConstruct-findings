// roc 2008-06 005a9a20  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9a20
//
// 005a9a20  56                   push esi
// 005a9a21  8b742408             mov esi, dword ptr [esp + 8]
// 005a9a25  57                   push edi
// 005a9a26  6a00                 push 0
// 005a9a28  6a02                 push 2
// 005a9a2a  56                   push esi
// 005a9a2b  e8907c0600           call 0x6116c0
// 005a9a30  8bf8                 mov edi, eax
// 005a9a32  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 005a9a37  50                   push eax
// 005a9a38  6a01                 push 1
// 005a9a3a  56                   push esi
// 005a9a3b  e8707b0600           call 0x6115b0
// 005a9a40  56                   push esi
// 005a9a41  57                   push edi
// 005a9a42  50                   push eax
// 005a9a43  e8f83b0700           call 0x61d640
// 005a9a48  83c424               add esp, 0x24
// 005a9a4b  5f                   pop edi
// 005a9a4c  5e                   pop esi
// 005a9a4d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
