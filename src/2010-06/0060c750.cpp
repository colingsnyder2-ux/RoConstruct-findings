// roc 2010-06 0060c750  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c750
//
// 0060c750  56                   push esi
// 0060c751  8b742408             mov esi, dword ptr [esp + 8]
// 0060c755  57                   push edi
// 0060c756  6a00                 push 0
// 0060c758  6a02                 push 2
// 0060c75a  56                   push esi
// 0060c75b  e8c0671100           call 0x722f20
// 0060c760  8bf8                 mov edi, eax
// 0060c762  a1502abe00           mov eax, dword ptr [0xbe2a50]
// 0060c767  50                   push eax
// 0060c768  6a01                 push 1
// 0060c76a  56                   push esi
// 0060c76b  e8a0661100           call 0x722e10
// 0060c770  56                   push esi
// 0060c771  57                   push edi
// 0060c772  50                   push eax
// 0060c773  e8f8da1100           call 0x72a270
// 0060c778  83c424               add esp, 0x24
// 0060c77b  5f                   pop edi
// 0060c77c  5e                   pop esi
// 0060c77d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
