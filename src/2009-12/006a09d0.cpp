// roc 2009-12 006a09d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a09d0
//
// 006a09d0  56                   push esi
// 006a09d1  8b742408             mov esi, dword ptr [esp + 8]
// 006a09d5  57                   push edi
// 006a09d6  6a00                 push 0
// 006a09d8  6a02                 push 2
// 006a09da  56                   push esi
// 006a09db  e8909d0e00           call 0x78a770
// 006a09e0  8bf8                 mov edi, eax
// 006a09e2  a1fc32b500           mov eax, dword ptr [0xb532fc]
// 006a09e7  50                   push eax
// 006a09e8  6a01                 push 1
// 006a09ea  56                   push esi
// 006a09eb  e8709c0e00           call 0x78a660
// 006a09f0  56                   push esi
// 006a09f1  57                   push edi
// 006a09f2  50                   push eax
// 006a09f3  e8589f0900           call 0x73a950
// 006a09f8  83c424               add esp, 0x24
// 006a09fb  5f                   pop edi
// 006a09fc  5e                   pop esi
// 006a09fd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
