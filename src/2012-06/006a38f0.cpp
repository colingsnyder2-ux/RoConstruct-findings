// roc 2012-06 006a38f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a38f0
//
// 006a38f0  56                   push esi
// 006a38f1  8b742408             mov esi, dword ptr [esp + 8]
// 006a38f5  57                   push edi
// 006a38f6  6a00                 push 0
// 006a38f8  6a02                 push 2
// 006a38fa  56                   push esi
// 006a38fb  e820001900           call 0x833920
// 006a3900  8bf8                 mov edi, eax
// 006a3902  a10414de00           mov eax, dword ptr [0xde1404]
// 006a3907  50                   push eax
// 006a3908  6a01                 push 1
// 006a390a  56                   push esi
// 006a390b  e800ff1800           call 0x833810
// 006a3910  56                   push esi
// 006a3911  57                   push edi
// 006a3912  50                   push eax
// 006a3913  e858f81900           call 0x843170
// 006a3918  83c424               add esp, 0x24
// 006a391b  5f                   pop edi
// 006a391c  5e                   pop esi
// 006a391d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
