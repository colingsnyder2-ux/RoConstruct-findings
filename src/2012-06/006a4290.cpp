// roc 2012-06 006a4290  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a4290
//
// 006a4290  56                   push esi
// 006a4291  8b742408             mov esi, dword ptr [esp + 8]
// 006a4295  57                   push edi
// 006a4296  6a00                 push 0
// 006a4298  6a02                 push 2
// 006a429a  56                   push esi
// 006a429b  e880f61800           call 0x833920
// 006a42a0  8bf8                 mov edi, eax
// 006a42a2  a1f813de00           mov eax, dword ptr [0xde13f8]
// 006a42a7  50                   push eax
// 006a42a8  6a01                 push 1
// 006a42aa  56                   push esi
// 006a42ab  e860f51800           call 0x833810
// 006a42b0  56                   push esi
// 006a42b1  57                   push edi
// 006a42b2  50                   push eax
// 006a42b3  e8a8d41900           call 0x841760
// 006a42b8  83c424               add esp, 0x24
// 006a42bb  5f                   pop edi
// 006a42bc  5e                   pop esi
// 006a42bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
