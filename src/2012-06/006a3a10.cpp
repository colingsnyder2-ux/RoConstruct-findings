// roc 2012-06 006a3a10  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3a10
//
// 006a3a10  56                   push esi
// 006a3a11  8b742408             mov esi, dword ptr [esp + 8]
// 006a3a15  57                   push edi
// 006a3a16  6a00                 push 0
// 006a3a18  6a02                 push 2
// 006a3a1a  56                   push esi
// 006a3a1b  e800ff1800           call 0x833920
// 006a3a20  8bf8                 mov edi, eax
// 006a3a22  a1bc13de00           mov eax, dword ptr [0xde13bc]
// 006a3a27  50                   push eax
// 006a3a28  6a01                 push 1
// 006a3a2a  56                   push esi
// 006a3a2b  e8e0fd1800           call 0x833810
// 006a3a30  56                   push esi
// 006a3a31  57                   push edi
// 006a3a32  50                   push eax
// 006a3a33  e888831900           call 0x83bdc0
// 006a3a38  83c424               add esp, 0x24
// 006a3a3b  5f                   pop edi
// 006a3a3c  5e                   pop esi
// 006a3a3d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
