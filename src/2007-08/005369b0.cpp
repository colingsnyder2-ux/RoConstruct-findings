// roc 2007-08 005369b0  unit: boost::any::placeholder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005369b0
//
// 005369b0  a1d8f78900           mov eax, dword ptr [0x89f7d8]
// 005369b5  56                   push esi
// 005369b6  8b742408             mov esi, dword ptr [esp + 8]
// 005369ba  57                   push edi
// 005369bb  50                   push eax
// 005369bc  6a02                 push 2
// 005369be  56                   push esi
// 005369bf  e87c880800           call 0x5bf240
// 005369c4  8b0dd8f78900         mov ecx, dword ptr [0x89f7d8]
// 005369ca  51                   push ecx
// 005369cb  6a01                 push 1
// 005369cd  56                   push esi
// 005369ce  8bf8                 mov edi, eax
// 005369d0  e86b880800           call 0x5bf240
// 005369d5  8b10                 mov edx, dword ptr [eax]
// 005369d7  33c0                 xor eax, eax
// 005369d9  3b17                 cmp edx, dword ptr [edi]
// 005369db  0f94c0               sete al
// 005369de  50                   push eax
// 005369df  56                   push esi
// 005369e0  e87b730800           call 0x5bdd60
// 005369e5  83c420               add esp, 0x20
// 005369e8  5f                   pop edi
// 005369e9  b801000000           mov eax, 1
// 005369ee  5e                   pop esi
// 005369ef  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
