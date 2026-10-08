// roc 2011-06 006197d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006197d0
//
// 006197d0  56                   push esi
// 006197d1  8b742408             mov esi, dword ptr [esp + 8]
// 006197d5  57                   push edi
// 006197d6  6a00                 push 0
// 006197d8  6a02                 push 2
// 006197da  56                   push esi
// 006197db  e8b0a91400           call 0x764190
// 006197e0  8bf8                 mov edi, eax
// 006197e2  a1dcefc800           mov eax, dword ptr [0xc8efdc]
// 006197e7  50                   push eax
// 006197e8  6a01                 push 1
// 006197ea  56                   push esi
// 006197eb  e890a81400           call 0x764080
// 006197f0  56                   push esi
// 006197f1  57                   push edi
// 006197f2  50                   push eax
// 006197f3  e8c85f1500           call 0x76f7c0
// 006197f8  83c424               add esp, 0x24
// 006197fb  5f                   pop edi
// 006197fc  5e                   pop esi
// 006197fd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
