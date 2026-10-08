// roc 2011-06 00619dd0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00619dd0
//
// 00619dd0  56                   push esi
// 00619dd1  8b742408             mov esi, dword ptr [esp + 8]
// 00619dd5  57                   push edi
// 00619dd6  6a00                 push 0
// 00619dd8  6a02                 push 2
// 00619dda  56                   push esi
// 00619ddb  e8b0a31400           call 0x764190
// 00619de0  8bf8                 mov edi, eax
// 00619de2  a1f8efc800           mov eax, dword ptr [0xc8eff8]
// 00619de7  50                   push eax
// 00619de8  6a01                 push 1
// 00619dea  56                   push esi
// 00619deb  e890a21400           call 0x764080
// 00619df0  56                   push esi
// 00619df1  57                   push edi
// 00619df2  50                   push eax
// 00619df3  e848751500           call 0x771340
// 00619df8  83c424               add esp, 0x24
// 00619dfb  5f                   pop edi
// 00619dfc  5e                   pop esi
// 00619dfd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
