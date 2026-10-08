// roc 2010-06 0060ca20  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ca20
//
// 0060ca20  56                   push esi
// 0060ca21  8b742408             mov esi, dword ptr [esp + 8]
// 0060ca25  57                   push edi
// 0060ca26  6a00                 push 0
// 0060ca28  6a02                 push 2
// 0060ca2a  56                   push esi
// 0060ca2b  e8f0641100           call 0x722f20
// 0060ca30  8bf8                 mov edi, eax
// 0060ca32  a1642abe00           mov eax, dword ptr [0xbe2a64]
// 0060ca37  50                   push eax
// 0060ca38  6a01                 push 1
// 0060ca3a  56                   push esi
// 0060ca3b  e8d0631100           call 0x722e10
// 0060ca40  56                   push esi
// 0060ca41  57                   push edi
// 0060ca42  50                   push eax
// 0060ca43  e888c11100           call 0x728bd0
// 0060ca48  83c424               add esp, 0x24
// 0060ca4b  5f                   pop edi
// 0060ca4c  5e                   pop esi
// 0060ca4d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
