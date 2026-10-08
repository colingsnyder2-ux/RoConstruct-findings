// roc 2011-06 00661a40  unit: RBX::VExplosion::?$EventDesc  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661a40
//
// 00661a40  a1d8efc800           mov eax, dword ptr [0xc8efd8]
// 00661a45  56                   push esi
// 00661a46  8b742408             mov esi, dword ptr [esp + 8]
// 00661a4a  57                   push edi
// 00661a4b  50                   push eax
// 00661a4c  6a02                 push 2
// 00661a4e  56                   push esi
// 00661a4f  e82c261000           call 0x764080
// 00661a54  8b0dd8efc800         mov ecx, dword ptr [0xc8efd8]
// 00661a5a  51                   push ecx
// 00661a5b  6a01                 push 1
// 00661a5d  56                   push esi
// 00661a5e  8bf8                 mov edi, eax
// 00661a60  e81b261000           call 0x764080
// 00661a65  8b10                 mov edx, dword ptr [eax]
// 00661a67  33c0                 xor eax, eax
// 00661a69  3b17                 cmp edx, dword ptr [edi]
// 00661a6b  0f94c0               sete al
// 00661a6e  50                   push eax
// 00661a6f  56                   push esi
// 00661a70  e89b101000           call 0x762b10
// 00661a75  83c420               add esp, 0x20
// 00661a78  5f                   pop edi
// 00661a79  b801000000           mov eax, 1
// 00661a7e  5e                   pop esi
// 00661a7f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
