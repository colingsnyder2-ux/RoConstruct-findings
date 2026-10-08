// roc 2007-08 00534460  unit: RBX::ScriptContext  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534460
//
// 00534460  56                   push esi
// 00534461  8b742408             mov esi, dword ptr [esp + 8]
// 00534465  57                   push edi
// 00534466  6a00                 push 0
// 00534468  6a02                 push 2
// 0053446a  56                   push esi
// 0053446b  e8e0ae0800           call 0x5bf350
// 00534470  8bf8                 mov edi, eax
// 00534472  a12cbc8a00           mov eax, dword ptr [0x8abc2c]
// 00534477  50                   push eax
// 00534478  6a01                 push 1
// 0053447a  56                   push esi
// 0053447b  e8c0ad0800           call 0x5bf240
// 00534480  56                   push esi
// 00534481  57                   push edi
// 00534482  50                   push eax
// 00534483  e858cc0800           call 0x5c10e0
// 00534488  83c424               add esp, 0x24
// 0053448b  5f                   pop edi
// 0053448c  5e                   pop esi
// 0053448d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
