// roc 2007-08 00535440  unit: std::logic_error  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00535440
//
// 00535440  a18cbe8a00           mov eax, dword ptr [0x8abe8c]
// 00535445  56                   push esi
// 00535446  8b742408             mov esi, dword ptr [esp + 8]
// 0053544a  50                   push eax
// 0053544b  6a01                 push 1
// 0053544d  56                   push esi
// 0053544e  e8ed9d0800           call 0x5bf240
// 00535453  6840707800           push 0x787040
// 00535458  56                   push esi
// 00535459  e892870800           call 0x5bdbf0
// 0053545e  83c414               add esp, 0x14
// 00535461  b801000000           mov eax, 1
// 00535466  5e                   pop esi
// 00535467  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_tostring@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
