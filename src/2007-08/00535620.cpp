// roc 2007-08 00535620  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535620
//
// 00535620  56                   push esi
// 00535621  8b742408             mov esi, dword ptr [esp + 8]
// 00535625  57                   push edi
// 00535626  6a00                 push 0
// 00535628  6a02                 push 2
// 0053562a  56                   push esi
// 0053562b  e8209d0800           call 0x5bf350
// 00535630  8bf8                 mov edi, eax
// 00535632  a174be8a00           mov eax, dword ptr [0x8abe74]
// 00535637  50                   push eax
// 00535638  6a01                 push 1
// 0053563a  56                   push esi
// 0053563b  e8009c0800           call 0x5bf240
// 00535640  56                   push esi
// 00535641  57                   push edi
// 00535642  50                   push eax
// 00535643  e888bf0800           call 0x5c15d0
// 00535648  83c424               add esp, 0x24
// 0053564b  5f                   pop edi
// 0053564c  5e                   pop esi
// 0053564d  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
