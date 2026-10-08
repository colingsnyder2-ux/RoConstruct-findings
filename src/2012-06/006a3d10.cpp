// roc 2012-06 006a3d10  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3d10
//
// 006a3d10  56                   push esi
// 006a3d11  8b742408             mov esi, dword ptr [esp + 8]
// 006a3d15  57                   push edi
// 006a3d16  6a00                 push 0
// 006a3d18  6a02                 push 2
// 006a3d1a  56                   push esi
// 006a3d1b  e800fc1800           call 0x833920
// 006a3d20  8bf8                 mov edi, eax
// 006a3d22  a1dc13de00           mov eax, dword ptr [0xde13dc]
// 006a3d27  50                   push eax
// 006a3d28  6a01                 push 1
// 006a3d2a  56                   push esi
// 006a3d2b  e8e0fa1800           call 0x833810
// 006a3d30  56                   push esi
// 006a3d31  57                   push edi
// 006a3d32  50                   push eax
// 006a3d33  e828c21900           call 0x83ff60
// 006a3d38  83c424               add esp, 0x24
// 006a3d3b  5f                   pop edi
// 006a3d3c  5e                   pop esi
// 006a3d3d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
