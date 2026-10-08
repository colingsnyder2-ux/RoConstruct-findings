// roc 2012-06 006a4140  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a4140
//
// 006a4140  56                   push esi
// 006a4141  8b742408             mov esi, dword ptr [esp + 8]
// 006a4145  57                   push edi
// 006a4146  6a00                 push 0
// 006a4148  6a02                 push 2
// 006a414a  56                   push esi
// 006a414b  e8d0f71800           call 0x833920
// 006a4150  8bf8                 mov edi, eax
// 006a4152  a1f413de00           mov eax, dword ptr [0xde13f4]
// 006a4157  50                   push eax
// 006a4158  6a01                 push 1
// 006a415a  56                   push esi
// 006a415b  e8b0f61800           call 0x833810
// 006a4160  56                   push esi
// 006a4161  57                   push edi
// 006a4162  50                   push eax
// 006a4163  e8d8d61900           call 0x841840
// 006a4168  83c424               add esp, 0x24
// 006a416b  5f                   pop edi
// 006a416c  5e                   pop esi
// 006a416d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
