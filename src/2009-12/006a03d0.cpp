// roc 2009-12 006a03d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a03d0
//
// 006a03d0  56                   push esi
// 006a03d1  8b742408             mov esi, dword ptr [esp + 8]
// 006a03d5  57                   push edi
// 006a03d6  6a00                 push 0
// 006a03d8  6a02                 push 2
// 006a03da  56                   push esi
// 006a03db  e890a30e00           call 0x78a770
// 006a03e0  8bf8                 mov edi, eax
// 006a03e2  a1cc24b600           mov eax, dword ptr [0xb624cc]
// 006a03e7  50                   push eax
// 006a03e8  6a01                 push 1
// 006a03ea  56                   push esi
// 006a03eb  e870a20e00           call 0x78a660
// 006a03f0  56                   push esi
// 006a03f1  57                   push edi
// 006a03f2  50                   push eax
// 006a03f3  e878fa0e00           call 0x78fe70
// 006a03f8  83c424               add esp, 0x24
// 006a03fb  5f                   pop edi
// 006a03fc  5e                   pop esi
// 006a03fd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
