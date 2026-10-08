// roc 2010-06 0060c630  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c630
//
// 0060c630  56                   push esi
// 0060c631  8b742408             mov esi, dword ptr [esp + 8]
// 0060c635  57                   push edi
// 0060c636  6a00                 push 0
// 0060c638  6a02                 push 2
// 0060c63a  56                   push esi
// 0060c63b  e8e0681100           call 0x722f20
// 0060c640  8bf8                 mov edi, eax
// 0060c642  a1602abe00           mov eax, dword ptr [0xbe2a60]
// 0060c647  50                   push eax
// 0060c648  6a01                 push 1
// 0060c64a  56                   push esi
// 0060c64b  e8c0671100           call 0x722e10
// 0060c650  56                   push esi
// 0060c651  57                   push edi
// 0060c652  50                   push eax
// 0060c653  e8b8021200           call 0x72c910
// 0060c658  83c424               add esp, 0x24
// 0060c65b  5f                   pop edi
// 0060c65c  5e                   pop esi
// 0060c65d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
