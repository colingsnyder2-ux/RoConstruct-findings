// roc 2007-08 00535290  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535290
//
// 00535290  56                   push esi
// 00535291  8b742408             mov esi, dword ptr [esp + 8]
// 00535295  57                   push edi
// 00535296  6a00                 push 0
// 00535298  6a02                 push 2
// 0053529a  56                   push esi
// 0053529b  e8b0a00800           call 0x5bf350
// 005352a0  8bf8                 mov edi, eax
// 005352a2  a178be8a00           mov eax, dword ptr [0x8abe78]
// 005352a7  50                   push eax
// 005352a8  6a01                 push 1
// 005352aa  56                   push esi
// 005352ab  e8909f0800           call 0x5bf240
// 005352b0  56                   push esi
// 005352b1  57                   push edi
// 005352b2  50                   push eax
// 005352b3  e808ca0800           call 0x5c1cc0
// 005352b8  83c424               add esp, 0x24
// 005352bb  5f                   pop edi
// 005352bc  5e                   pop esi
// 005352bd  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
