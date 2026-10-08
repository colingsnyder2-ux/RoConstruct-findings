// roc 2010-06 0060cbe0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cbe0
//
// 0060cbe0  56                   push esi
// 0060cbe1  8b742408             mov esi, dword ptr [esp + 8]
// 0060cbe5  57                   push edi
// 0060cbe6  6a00                 push 0
// 0060cbe8  6a02                 push 2
// 0060cbea  56                   push esi
// 0060cbeb  e830631100           call 0x722f20
// 0060cbf0  8bf8                 mov edi, eax
// 0060cbf2  a16c2abe00           mov eax, dword ptr [0xbe2a6c]
// 0060cbf7  50                   push eax
// 0060cbf8  6a01                 push 1
// 0060cbfa  56                   push esi
// 0060cbfb  e810621100           call 0x722e10
// 0060cc00  56                   push esi
// 0060cc01  57                   push edi
// 0060cc02  50                   push eax
// 0060cc03  e8d8c01100           call 0x728ce0
// 0060cc08  83c424               add esp, 0x24
// 0060cc0b  5f                   pop edi
// 0060cc0c  5e                   pop esi
// 0060cc0d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
