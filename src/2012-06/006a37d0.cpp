// roc 2012-06 006a37d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a37d0
//
// 006a37d0  56                   push esi
// 006a37d1  8b742408             mov esi, dword ptr [esp + 8]
// 006a37d5  57                   push edi
// 006a37d6  6a00                 push 0
// 006a37d8  6a02                 push 2
// 006a37da  56                   push esi
// 006a37db  e840011900           call 0x833920
// 006a37e0  8bf8                 mov edi, eax
// 006a37e2  a1549eda00           mov eax, dword ptr [0xda9e54]
// 006a37e7  50                   push eax
// 006a37e8  6a01                 push 1
// 006a37ea  56                   push esi
// 006a37eb  e820001900           call 0x833810
// 006a37f0  56                   push esi
// 006a37f1  57                   push edi
// 006a37f2  50                   push eax
// 006a37f3  e848610600           call 0x709940
// 006a37f8  83c424               add esp, 0x24
// 006a37fb  5f                   pop edi
// 006a37fc  5e                   pop esi
// 006a37fd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
