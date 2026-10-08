// roc 2012-06 006a3950  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3950
//
// 006a3950  56                   push esi
// 006a3951  8b742408             mov esi, dword ptr [esp + 8]
// 006a3955  57                   push edi
// 006a3956  6a00                 push 0
// 006a3958  6a02                 push 2
// 006a395a  56                   push esi
// 006a395b  e8c0ff1800           call 0x833920
// 006a3960  8bf8                 mov edi, eax
// 006a3962  a1d413de00           mov eax, dword ptr [0xde13d4]
// 006a3967  50                   push eax
// 006a3968  6a01                 push 1
// 006a396a  56                   push esi
// 006a396b  e8a0fe1800           call 0x833810
// 006a3970  56                   push esi
// 006a3971  57                   push edi
// 006a3972  50                   push eax
// 006a3973  e8a8bb1900           call 0x83f520
// 006a3978  83c424               add esp, 0x24
// 006a397b  5f                   pop edi
// 006a397c  5e                   pop esi
// 006a397d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
