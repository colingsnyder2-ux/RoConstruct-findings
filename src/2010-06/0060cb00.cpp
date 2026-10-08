// roc 2010-06 0060cb00  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060cb00
//
// 0060cb00  56                   push esi
// 0060cb01  8b742408             mov esi, dword ptr [esp + 8]
// 0060cb05  57                   push edi
// 0060cb06  6a00                 push 0
// 0060cb08  6a02                 push 2
// 0060cb0a  56                   push esi
// 0060cb0b  e810641100           call 0x722f20
// 0060cb10  8bf8                 mov edi, eax
// 0060cb12  a1682abe00           mov eax, dword ptr [0xbe2a68]
// 0060cb17  50                   push eax
// 0060cb18  6a01                 push 1
// 0060cb1a  56                   push esi
// 0060cb1b  e8f0621100           call 0x722e10
// 0060cb20  56                   push esi
// 0060cb21  57                   push edi
// 0060cb22  50                   push eax
// 0060cb23  e848081200           call 0x72d370
// 0060cb28  83c424               add esp, 0x24
// 0060cb2b  5f                   pop edi
// 0060cb2c  5e                   pop esi
// 0060cb2d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
