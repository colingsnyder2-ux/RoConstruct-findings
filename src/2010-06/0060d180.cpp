// roc 2010-06 0060d180  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060d180
//
// 0060d180  56                   push esi
// 0060d181  8b742408             mov esi, dword ptr [esp + 8]
// 0060d185  57                   push edi
// 0060d186  6a00                 push 0
// 0060d188  6a02                 push 2
// 0060d18a  56                   push esi
// 0060d18b  e8905d1100           call 0x722f20
// 0060d190  8bf8                 mov edi, eax
// 0060d192  a1802abe00           mov eax, dword ptr [0xbe2a80]
// 0060d197  50                   push eax
// 0060d198  6a01                 push 1
// 0060d19a  56                   push esi
// 0060d19b  e8705c1100           call 0x722e10
// 0060d1a0  56                   push esi
// 0060d1a1  57                   push edi
// 0060d1a2  50                   push eax
// 0060d1a3  e8280a1200           call 0x72dbd0
// 0060d1a8  83c424               add esp, 0x24
// 0060d1ab  5f                   pop edi
// 0060d1ac  5e                   pop esi
// 0060d1ad  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
