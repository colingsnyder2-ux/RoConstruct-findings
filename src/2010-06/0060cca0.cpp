// roc 2010-06 0060cca0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cca0
//
// 0060cca0  56                   push esi
// 0060cca1  8b742408             mov esi, dword ptr [esp + 8]
// 0060cca5  57                   push edi
// 0060cca6  6a00                 push 0
// 0060cca8  6a02                 push 2
// 0060ccaa  56                   push esi
// 0060ccab  e870621100           call 0x722f20
// 0060ccb0  8bf8                 mov edi, eax
// 0060ccb2  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0060ccb7  50                   push eax
// 0060ccb8  6a01                 push 1
// 0060ccba  56                   push esi
// 0060ccbb  e850611100           call 0x722e10
// 0060ccc0  56                   push esi
// 0060ccc1  57                   push edi
// 0060ccc2  50                   push eax
// 0060ccc3  e8d8e61100           call 0x72b3a0
// 0060ccc8  83c424               add esp, 0x24
// 0060cccb  5f                   pop edi
// 0060cccc  5e                   pop esi
// 0060cccd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
