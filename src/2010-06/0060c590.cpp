// roc 2010-06 0060c590  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c590
//
// 0060c590  56                   push esi
// 0060c591  8b742408             mov esi, dword ptr [esp + 8]
// 0060c595  57                   push edi
// 0060c596  6a00                 push 0
// 0060c598  6a02                 push 2
// 0060c59a  56                   push esi
// 0060c59b  e880691100           call 0x722f20
// 0060c5a0  8bf8                 mov edi, eax
// 0060c5a2  a18c2abe00           mov eax, dword ptr [0xbe2a8c]
// 0060c5a7  50                   push eax
// 0060c5a8  6a01                 push 1
// 0060c5aa  56                   push esi
// 0060c5ab  e860681100           call 0x722e10
// 0060c5b0  56                   push esi
// 0060c5b1  57                   push edi
// 0060c5b2  50                   push eax
// 0060c5b3  e818241200           call 0x72e9d0
// 0060c5b8  83c424               add esp, 0x24
// 0060c5bb  5f                   pop edi
// 0060c5bc  5e                   pop esi
// 0060c5bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
