// roc 2009-06 006345c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006345c0
//
// 006345c0  56                   push esi
// 006345c1  8b742408             mov esi, dword ptr [esp + 8]
// 006345c5  57                   push edi
// 006345c6  6a00                 push 0
// 006345c8  6a02                 push 2
// 006345ca  56                   push esi
// 006345cb  e8f0660800           call 0x6bacc0
// 006345d0  8bf8                 mov edi, eax
// 006345d2  a1f42aa200           mov eax, dword ptr [0xa22af4]
// 006345d7  50                   push eax
// 006345d8  6a01                 push 1
// 006345da  56                   push esi
// 006345db  e8d0650800           call 0x6babb0
// 006345e0  56                   push esi
// 006345e1  57                   push edi
// 006345e2  50                   push eax
// 006345e3  e8789d0800           call 0x6be360
// 006345e8  83c424               add esp, 0x24
// 006345eb  5f                   pop edi
// 006345ec  5e                   pop esi
// 006345ed  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
