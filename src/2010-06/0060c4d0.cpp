// roc 2010-06 0060c4d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c4d0
//
// 0060c4d0  56                   push esi
// 0060c4d1  8b742408             mov esi, dword ptr [esp + 8]
// 0060c4d5  57                   push edi
// 0060c4d6  6a00                 push 0
// 0060c4d8  6a02                 push 2
// 0060c4da  56                   push esi
// 0060c4db  e8406a1100           call 0x722f20
// 0060c4e0  8bf8                 mov edi, eax
// 0060c4e2  a1902abe00           mov eax, dword ptr [0xbe2a90]
// 0060c4e7  50                   push eax
// 0060c4e8  6a01                 push 1
// 0060c4ea  56                   push esi
// 0060c4eb  e820691100           call 0x722e10
// 0060c4f0  56                   push esi
// 0060c4f1  57                   push edi
// 0060c4f2  50                   push eax
// 0060c4f3  e8a81c1200           call 0x72e1a0
// 0060c4f8  83c424               add esp, 0x24
// 0060c4fb  5f                   pop edi
// 0060c4fc  5e                   pop esi
// 0060c4fd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
