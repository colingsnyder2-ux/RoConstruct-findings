// roc 2009-12 0069f630  unit: std::strstream  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f630
//
// 0069f630  a1642bb600           mov eax, dword ptr [0xb62b64]
// 0069f635  56                   push esi
// 0069f636  8b742408             mov esi, dword ptr [esp + 8]
// 0069f63a  57                   push edi
// 0069f63b  50                   push eax
// 0069f63c  6a02                 push 2
// 0069f63e  56                   push esi
// 0069f63f  e81cb00e00           call 0x78a660
// 0069f644  8b0d642bb600         mov ecx, dword ptr [0xb62b64]
// 0069f64a  51                   push ecx
// 0069f64b  6a01                 push 1
// 0069f64d  56                   push esi
// 0069f64e  8bf8                 mov edi, eax
// 0069f650  e80bb00e00           call 0x78a660
// 0069f655  8b10                 mov edx, dword ptr [eax]
// 0069f657  33c0                 xor eax, eax
// 0069f659  3b17                 cmp edx, dword ptr [edi]
// 0069f65b  0f94c0               sete al
// 0069f65e  50                   push eax
// 0069f65f  56                   push esi
// 0069f660  e8eb980e00           call 0x788f50
// 0069f665  83c420               add esp, 0x20
// 0069f668  5f                   pop edi
// 0069f669  b801000000           mov eax, 1
// 0069f66e  5e                   pop esi
// 0069f66f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
