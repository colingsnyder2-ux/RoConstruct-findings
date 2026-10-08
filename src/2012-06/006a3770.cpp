// roc 2012-06 006a3770  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3770
//
// 006a3770  56                   push esi
// 006a3771  8b742408             mov esi, dword ptr [esp + 8]
// 006a3775  57                   push edi
// 006a3776  6a00                 push 0
// 006a3778  6a02                 push 2
// 006a377a  56                   push esi
// 006a377b  e8a0011900           call 0x833920
// 006a3780  8bf8                 mov edi, eax
// 006a3782  a10814de00           mov eax, dword ptr [0xde1408]
// 006a3787  50                   push eax
// 006a3788  6a01                 push 1
// 006a378a  56                   push esi
// 006a378b  e880001900           call 0x833810
// 006a3790  56                   push esi
// 006a3791  57                   push edi
// 006a3792  50                   push eax
// 006a3793  e868e41900           call 0x841c00
// 006a3798  83c424               add esp, 0x24
// 006a379b  5f                   pop edi
// 006a379c  5e                   pop esi
// 006a379d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
