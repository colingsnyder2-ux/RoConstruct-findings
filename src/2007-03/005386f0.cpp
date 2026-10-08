// roc 2007-03 005386f0  unit: seg_00530000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005386f0
//
// 005386f0  a108e48900           mov eax, dword ptr [0x89e408]
// 005386f5  56                   push esi
// 005386f6  8b742408             mov esi, dword ptr [esp + 8]
// 005386fa  57                   push edi
// 005386fb  50                   push eax
// 005386fc  6a02                 push 2
// 005386fe  56                   push esi
// 005386ff  e8ac1d0800           call 0x5ba4b0
// 00538704  8b0d08e48900         mov ecx, dword ptr [0x89e408]
// 0053870a  51                   push ecx
// 0053870b  6a01                 push 1
// 0053870d  56                   push esi
// 0053870e  8bf8                 mov edi, eax
// 00538710  e89b1d0800           call 0x5ba4b0
// 00538715  8b10                 mov edx, dword ptr [eax]
// 00538717  33c0                 xor eax, eax
// 00538719  3b17                 cmp edx, dword ptr [edi]
// 0053871b  0f94c0               sete al
// 0053871e  50                   push eax
// 0053871f  56                   push esi
// 00538720  e80b0b0800           call 0x5b9230
// 00538725  83c420               add esp, 0x20
// 00538728  5f                   pop edi
// 00538729  b801000000           mov eax, 1
// 0053872e  5e                   pop esi
// 0053872f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
