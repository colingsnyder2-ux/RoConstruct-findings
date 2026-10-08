// roc 2012-06 006a3ef0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3ef0
//
// 006a3ef0  56                   push esi
// 006a3ef1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3ef5  57                   push edi
// 006a3ef6  6a00                 push 0
// 006a3ef8  6a02                 push 2
// 006a3efa  56                   push esi
// 006a3efb  e820fa1800           call 0x833920
// 006a3f00  8bf8                 mov edi, eax
// 006a3f02  a1b418de00           mov eax, dword ptr [0xde18b4]
// 006a3f07  50                   push eax
// 006a3f08  6a01                 push 1
// 006a3f0a  56                   push esi
// 006a3f0b  e800f91800           call 0x833810
// 006a3f10  56                   push esi
// 006a3f11  57                   push edi
// 006a3f12  50                   push eax
// 006a3f13  e8084c1a00           call 0x848b20
// 006a3f18  83c424               add esp, 0x24
// 006a3f1b  5f                   pop edi
// 006a3f1c  5e                   pop esi
// 006a3f1d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
