// roc 2012-06 006a39b0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a39b0
//
// 006a39b0  56                   push esi
// 006a39b1  8b742408             mov esi, dword ptr [esp + 8]
// 006a39b5  57                   push edi
// 006a39b6  6a00                 push 0
// 006a39b8  6a02                 push 2
// 006a39ba  56                   push esi
// 006a39bb  e860ff1800           call 0x833920
// 006a39c0  8bf8                 mov edi, eax
// 006a39c2  a1b813de00           mov eax, dword ptr [0xde13b8]
// 006a39c7  50                   push eax
// 006a39c8  6a01                 push 1
// 006a39ca  56                   push esi
// 006a39cb  e840fe1800           call 0x833810
// 006a39d0  56                   push esi
// 006a39d1  57                   push edi
// 006a39d2  50                   push eax
// 006a39d3  e868811900           call 0x83bb40
// 006a39d8  83c424               add esp, 0x24
// 006a39db  5f                   pop edi
// 006a39dc  5e                   pop esi
// 006a39dd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
