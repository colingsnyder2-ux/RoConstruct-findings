// roc 2009-12 006a1450  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a1450
//
// 006a1450  56                   push esi
// 006a1451  8b742408             mov esi, dword ptr [esp + 8]
// 006a1455  57                   push edi
// 006a1456  6a00                 push 0
// 006a1458  6a02                 push 2
// 006a145a  56                   push esi
// 006a145b  e810930e00           call 0x78a770
// 006a1460  8bf8                 mov edi, eax
// 006a1462  a1702bb600           mov eax, dword ptr [0xb62b70]
// 006a1467  50                   push eax
// 006a1468  6a01                 push 1
// 006a146a  56                   push esi
// 006a146b  e8f0910e00           call 0x78a660
// 006a1470  56                   push esi
// 006a1471  57                   push edi
// 006a1472  50                   push eax
// 006a1473  e8d8400f00           call 0x795550
// 006a1478  83c424               add esp, 0x24
// 006a147b  5f                   pop edi
// 006a147c  5e                   pop esi
// 006a147d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
