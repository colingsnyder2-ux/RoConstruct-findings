// roc 2010-06 0060cfb0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cfb0
//
// 0060cfb0  56                   push esi
// 0060cfb1  8b742408             mov esi, dword ptr [esp + 8]
// 0060cfb5  57                   push edi
// 0060cfb6  6a00                 push 0
// 0060cfb8  6a02                 push 2
// 0060cfba  56                   push esi
// 0060cfbb  e8605f1100           call 0x722f20
// 0060cfc0  8bf8                 mov edi, eax
// 0060cfc2  a17c2abe00           mov eax, dword ptr [0xbe2a7c]
// 0060cfc7  50                   push eax
// 0060cfc8  6a01                 push 1
// 0060cfca  56                   push esi
// 0060cfcb  e8405e1100           call 0x722e10
// 0060cfd0  56                   push esi
// 0060cfd1  57                   push edi
// 0060cfd2  50                   push eax
// 0060cfd3  e8880d1200           call 0x72dd60
// 0060cfd8  83c424               add esp, 0x24
// 0060cfdb  5f                   pop edi
// 0060cfdc  5e                   pop esi
// 0060cfdd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
