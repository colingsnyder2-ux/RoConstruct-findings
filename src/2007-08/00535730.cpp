// roc 2007-08 00535730  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535730
//
// 00535730  56                   push esi
// 00535731  8b742408             mov esi, dword ptr [esp + 8]
// 00535735  57                   push edi
// 00535736  6a00                 push 0
// 00535738  6a02                 push 2
// 0053573a  56                   push esi
// 0053573b  e8109c0800           call 0x5bf350
// 00535740  8bf8                 mov edi, eax
// 00535742  a17cbe8a00           mov eax, dword ptr [0x8abe7c]
// 00535747  50                   push eax
// 00535748  6a01                 push 1
// 0053574a  56                   push esi
// 0053574b  e8f09a0800           call 0x5bf240
// 00535750  56                   push esi
// 00535751  57                   push edi
// 00535752  50                   push eax
// 00535753  e8e8ca0800           call 0x5c2240
// 00535758  83c424               add esp, 0x24
// 0053575b  5f                   pop edi
// 0053575c  5e                   pop esi
// 0053575d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
