// roc 2007-08 00535520  unit: std::logic_error  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535520
//
// 00535520  a1d8f78900           mov eax, dword ptr [0x89f7d8]
// 00535525  56                   push esi
// 00535526  8b742408             mov esi, dword ptr [esp + 8]
// 0053552a  50                   push eax
// 0053552b  6a01                 push 1
// 0053552d  56                   push esi
// 0053552e  e80d9d0800           call 0x5bf240
// 00535533  685c567a00           push 0x7a565c
// 00535538  56                   push esi
// 00535539  e8b2860800           call 0x5bdbf0
// 0053553e  83c414               add esp, 0x14
// 00535541  b801000000           mov eax, 1
// 00535546  5e                   pop esi
// 00535547  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@V?$shared_ptr@VNode@ThreadRef@Lua@RBX@@@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
