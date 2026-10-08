// roc 2010-06 0060b090  unit: RBX::ScriptContext  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b090
//
// 0060b090  56                   push esi
// 0060b091  8b742408             mov esi, dword ptr [esp + 8]
// 0060b095  57                   push edi
// 0060b096  6a00                 push 0
// 0060b098  6a02                 push 2
// 0060b09a  56                   push esi
// 0060b09b  e8807e1100           call 0x722f20
// 0060b0a0  8bf8                 mov edi, eax
// 0060b0a2  a1842abe00           mov eax, dword ptr [0xbe2a84]
// 0060b0a7  50                   push eax
// 0060b0a8  6a01                 push 1
// 0060b0aa  56                   push esi
// 0060b0ab  e8607d1100           call 0x722e10
// 0060b0b0  56                   push esi
// 0060b0b1  57                   push edi
// 0060b0b2  50                   push eax
// 0060b0b3  e8b8291200           call 0x72da70
// 0060b0b8  83c424               add esp, 0x24
// 0060b0bb  5f                   pop edi
// 0060b0bc  5e                   pop esi
// 0060b0bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
