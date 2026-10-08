// roc 2010-06 0060c830  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c830
//
// 0060c830  56                   push esi
// 0060c831  8b742408             mov esi, dword ptr [esp + 8]
// 0060c835  57                   push edi
// 0060c836  6a00                 push 0
// 0060c838  6a02                 push 2
// 0060c83a  56                   push esi
// 0060c83b  e8e0661100           call 0x722f20
// 0060c840  8bf8                 mov edi, eax
// 0060c842  a14c2abe00           mov eax, dword ptr [0xbe2a4c]
// 0060c847  50                   push eax
// 0060c848  6a01                 push 1
// 0060c84a  56                   push esi
// 0060c84b  e8c0651100           call 0x722e10
// 0060c850  56                   push esi
// 0060c851  57                   push edi
// 0060c852  50                   push eax
// 0060c853  e8a8ce1100           call 0x729700
// 0060c858  83c424               add esp, 0x24
// 0060c85b  5f                   pop edi
// 0060c85c  5e                   pop esi
// 0060c85d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
