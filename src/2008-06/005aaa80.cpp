// roc 2008-06 005aaa80  unit: RBX::VScriptContext::?$FactoryProduct  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005aaa80
//
// 005aaa80  a130979400           mov eax, dword ptr [0x949730]
// 005aaa85  56                   push esi
// 005aaa86  8b742408             mov esi, dword ptr [esp + 8]
// 005aaa8a  57                   push edi
// 005aaa8b  50                   push eax
// 005aaa8c  6a02                 push 2
// 005aaa8e  56                   push esi
// 005aaa8f  e81c6b0600           call 0x6115b0
// 005aaa94  8b0d30979400         mov ecx, dword ptr [0x949730]
// 005aaa9a  51                   push ecx
// 005aaa9b  6a01                 push 1
// 005aaa9d  56                   push esi
// 005aaa9e  8bf8                 mov edi, eax
// 005aaaa0  e80b6b0600           call 0x6115b0
// 005aaaa5  8b10                 mov edx, dword ptr [eax]
// 005aaaa7  33c0                 xor eax, eax
// 005aaaa9  3b17                 cmp edx, dword ptr [edi]
// 005aaaab  0f94c0               sete al
// 005aaaae  50                   push eax
// 005aaaaf  56                   push esi
// 005aaab0  e83b790600           call 0x6123f0
// 005aaab5  83c420               add esp, 0x20
// 005aaab8  5f                   pop edi
// 005aaab9  b801000000           mov eax, 1
// 005aaabe  5e                   pop esi
// 005aaabf  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
