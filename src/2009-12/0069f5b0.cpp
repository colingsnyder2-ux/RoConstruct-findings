// roc 2009-12 0069f5b0  unit: std::strstream  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f5b0
//
// 0069f5b0  a1602bb600           mov eax, dword ptr [0xb62b60]
// 0069f5b5  56                   push esi
// 0069f5b6  8b742408             mov esi, dword ptr [esp + 8]
// 0069f5ba  57                   push edi
// 0069f5bb  50                   push eax
// 0069f5bc  6a02                 push 2
// 0069f5be  56                   push esi
// 0069f5bf  e89cb00e00           call 0x78a660
// 0069f5c4  8b0d602bb600         mov ecx, dword ptr [0xb62b60]
// 0069f5ca  51                   push ecx
// 0069f5cb  6a01                 push 1
// 0069f5cd  56                   push esi
// 0069f5ce  8bf8                 mov edi, eax
// 0069f5d0  e88bb00e00           call 0x78a660
// 0069f5d5  8b10                 mov edx, dword ptr [eax]
// 0069f5d7  33c0                 xor eax, eax
// 0069f5d9  3b17                 cmp edx, dword ptr [edi]
// 0069f5db  0f94c0               sete al
// 0069f5de  50                   push eax
// 0069f5df  56                   push esi
// 0069f5e0  e86b990e00           call 0x788f50
// 0069f5e5  83c420               add esp, 0x20
// 0069f5e8  5f                   pop edi
// 0069f5e9  b801000000           mov eax, 1
// 0069f5ee  5e                   pop esi
// 0069f5ef  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
