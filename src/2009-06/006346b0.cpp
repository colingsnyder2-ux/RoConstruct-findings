// roc 2009-06 006346b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006346b0
//
// 006346b0  56                   push esi
// 006346b1  8b742408             mov esi, dword ptr [esp + 8]
// 006346b5  57                   push edi
// 006346b6  6a00                 push 0
// 006346b8  6a02                 push 2
// 006346ba  56                   push esi
// 006346bb  e800660800           call 0x6bacc0
// 006346c0  8bf8                 mov edi, eax
// 006346c2  a11c2ba200           mov eax, dword ptr [0xa22b1c]
// 006346c7  50                   push eax
// 006346c8  6a01                 push 1
// 006346ca  56                   push esi
// 006346cb  e8e0640800           call 0x6babb0
// 006346d0  56                   push esi
// 006346d1  57                   push edi
// 006346d2  50                   push eax
// 006346d3  e8d8bf0800           call 0x6c06b0
// 006346d8  83c424               add esp, 0x24
// 006346db  5f                   pop edi
// 006346dc  5e                   pop esi
// 006346dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
