// roc 2009-12 0069f6b0  unit: std::strstream  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f6b0
//
// 0069f6b0  a1502bb600           mov eax, dword ptr [0xb62b50]
// 0069f6b5  56                   push esi
// 0069f6b6  8b742408             mov esi, dword ptr [esp + 8]
// 0069f6ba  57                   push edi
// 0069f6bb  50                   push eax
// 0069f6bc  6a02                 push 2
// 0069f6be  56                   push esi
// 0069f6bf  e89caf0e00           call 0x78a660
// 0069f6c4  8b0d502bb600         mov ecx, dword ptr [0xb62b50]
// 0069f6ca  51                   push ecx
// 0069f6cb  6a01                 push 1
// 0069f6cd  56                   push esi
// 0069f6ce  8bf8                 mov edi, eax
// 0069f6d0  e88baf0e00           call 0x78a660
// 0069f6d5  8b10                 mov edx, dword ptr [eax]
// 0069f6d7  33c0                 xor eax, eax
// 0069f6d9  3b17                 cmp edx, dword ptr [edi]
// 0069f6db  0f94c0               sete al
// 0069f6de  50                   push eax
// 0069f6df  56                   push esi
// 0069f6e0  e86b980e00           call 0x788f50
// 0069f6e5  83c420               add esp, 0x20
// 0069f6e8  5f                   pop edi
// 0069f6e9  b801000000           mov eax, 1
// 0069f6ee  5e                   pop esi
// 0069f6ef  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
