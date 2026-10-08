// roc 2012-06 006a3890  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3890
//
// 006a3890  56                   push esi
// 006a3891  8b742408             mov esi, dword ptr [esp + 8]
// 006a3895  57                   push edi
// 006a3896  6a00                 push 0
// 006a3898  6a02                 push 2
// 006a389a  56                   push esi
// 006a389b  e880001900           call 0x833920
// 006a38a0  8bf8                 mov edi, eax
// 006a38a2  a15c9eda00           mov eax, dword ptr [0xda9e5c]
// 006a38a7  50                   push eax
// 006a38a8  6a01                 push 1
// 006a38aa  56                   push esi
// 006a38ab  e860ff1800           call 0x833810
// 006a38b0  56                   push esi
// 006a38b1  57                   push edi
// 006a38b2  50                   push eax
// 006a38b3  e888600600           call 0x709940
// 006a38b8  83c424               add esp, 0x24
// 006a38bb  5f                   pop edi
// 006a38bc  5e                   pop esi
// 006a38bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
