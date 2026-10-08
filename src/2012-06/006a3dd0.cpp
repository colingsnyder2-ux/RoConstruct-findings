// roc 2012-06 006a3dd0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3dd0
//
// 006a3dd0  56                   push esi
// 006a3dd1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3dd5  57                   push edi
// 006a3dd6  6a00                 push 0
// 006a3dd8  6a02                 push 2
// 006a3dda  56                   push esi
// 006a3ddb  e840fb1800           call 0x833920
// 006a3de0  8bf8                 mov edi, eax
// 006a3de2  a1e413de00           mov eax, dword ptr [0xde13e4]
// 006a3de7  50                   push eax
// 006a3de8  6a01                 push 1
// 006a3dea  56                   push esi
// 006a3deb  e820fa1800           call 0x833810
// 006a3df0  56                   push esi
// 006a3df1  57                   push edi
// 006a3df2  50                   push eax
// 006a3df3  e8286b1900           call 0x83a920
// 006a3df8  83c424               add esp, 0x24
// 006a3dfb  5f                   pop edi
// 006a3dfc  5e                   pop esi
// 006a3dfd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
