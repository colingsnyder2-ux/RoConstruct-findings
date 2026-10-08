// roc 2008-06 005a9a50  unit: RBX::VScriptContext::?$FactoryProduct  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9a50
//
// 005a9a50  a1c4b19500           mov eax, dword ptr [0x95b1c4]
// 005a9a55  56                   push esi
// 005a9a56  8b742408             mov esi, dword ptr [esp + 8]
// 005a9a5a  57                   push edi
// 005a9a5b  50                   push eax
// 005a9a5c  6a02                 push 2
// 005a9a5e  56                   push esi
// 005a9a5f  e84c7b0600           call 0x6115b0
// 005a9a64  8b0dc4b19500         mov ecx, dword ptr [0x95b1c4]
// 005a9a6a  51                   push ecx
// 005a9a6b  6a01                 push 1
// 005a9a6d  56                   push esi
// 005a9a6e  8bf8                 mov edi, eax
// 005a9a70  e83b7b0600           call 0x6115b0
// 005a9a75  8b10                 mov edx, dword ptr [eax]
// 005a9a77  33c0                 xor eax, eax
// 005a9a79  3b17                 cmp edx, dword ptr [edi]
// 005a9a7b  0f94c0               sete al
// 005a9a7e  50                   push eax
// 005a9a7f  56                   push esi
// 005a9a80  e86b890600           call 0x6123f0
// 005a9a85  83c420               add esp, 0x20
// 005a9a88  5f                   pop edi
// 005a9a89  b801000000           mov eax, 1
// 005a9a8e  5e                   pop esi
// 005a9a8f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
