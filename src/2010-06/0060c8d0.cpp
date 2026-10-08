// roc 2010-06 0060c8d0  unit: RBX::VScriptContext::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060c8d0
//
// 0060c8d0  56                   push esi
// 0060c8d1  8b742408             mov esi, dword ptr [esp + 8]
// 0060c8d5  57                   push edi
// 0060c8d6  6a00                 push 0
// 0060c8d8  6a02                 push 2
// 0060c8da  56                   push esi
// 0060c8db  e840661100           call 0x722f20
// 0060c8e0  8bf8                 mov edi, eax
// 0060c8e2  a1582abe00           mov eax, dword ptr [0xbe2a58]
// 0060c8e7  50                   push eax
// 0060c8e8  6a01                 push 1
// 0060c8ea  56                   push esi
// 0060c8eb  e820651100           call 0x722e10
// 0060c8f0  56                   push esi
// 0060c8f1  57                   push edi
// 0060c8f2  50                   push eax
// 0060c8f3  e828e41100           call 0x72ad20
// 0060c8f8  83c424               add esp, 0x24
// 0060c8fb  5f                   pop edi
// 0060c8fc  5e                   pop esi
// 0060c8fd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
