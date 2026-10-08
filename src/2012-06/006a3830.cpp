// roc 2012-06 006a3830  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3830
//
// 006a3830  56                   push esi
// 006a3831  8b742408             mov esi, dword ptr [esp + 8]
// 006a3835  57                   push edi
// 006a3836  6a00                 push 0
// 006a3838  6a02                 push 2
// 006a383a  56                   push esi
// 006a383b  e8e0001900           call 0x833920
// 006a3840  8bf8                 mov edi, eax
// 006a3842  a1589eda00           mov eax, dword ptr [0xda9e58]
// 006a3847  50                   push eax
// 006a3848  6a01                 push 1
// 006a384a  56                   push esi
// 006a384b  e8c0ff1800           call 0x833810
// 006a3850  56                   push esi
// 006a3851  57                   push edi
// 006a3852  50                   push eax
// 006a3853  e8e8600600           call 0x709940
// 006a3858  83c424               add esp, 0x24
// 006a385b  5f                   pop edi
// 006a385c  5e                   pop esi
// 006a385d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
