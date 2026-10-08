// roc 2007-08 00535580  unit: std::logic_error  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535580
//
// 00535580  56                   push esi
// 00535581  8b742408             mov esi, dword ptr [esp + 8]
// 00535585  57                   push edi
// 00535586  6a00                 push 0
// 00535588  6a02                 push 2
// 0053558a  56                   push esi
// 0053558b  e8c09d0800           call 0x5bf350
// 00535590  8bf8                 mov edi, eax
// 00535592  a1d8f78900           mov eax, dword ptr [0x89f7d8]
// 00535597  50                   push eax
// 00535598  6a01                 push 1
// 0053559a  56                   push esi
// 0053559b  e8a09c0800           call 0x5bf240
// 005355a0  56                   push esi
// 005355a1  57                   push edi
// 005355a2  50                   push eax
// 005355a3  e838710300           call 0x56c6e0
// 005355a8  83c424               add esp, 0x24
// 005355ab  5f                   pop edi
// 005355ac  5e                   pop esi
// 005355ad  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_index@?$Bridge@V?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@$0A@@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
