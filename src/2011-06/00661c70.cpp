// roc 2011-06 00661c70  unit: RBX::VExplosion::?$EventDesc  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661c70
//
// 00661c70  a160d5c400           mov eax, dword ptr [0xc4d560]
// 00661c75  56                   push esi
// 00661c76  8b742408             mov esi, dword ptr [esp + 8]
// 00661c7a  57                   push edi
// 00661c7b  50                   push eax
// 00661c7c  6a02                 push 2
// 00661c7e  56                   push esi
// 00661c7f  e8fc231000           call 0x764080
// 00661c84  8b0d60d5c400         mov ecx, dword ptr [0xc4d560]
// 00661c8a  51                   push ecx
// 00661c8b  6a01                 push 1
// 00661c8d  56                   push esi
// 00661c8e  8bf8                 mov edi, eax
// 00661c90  e8eb231000           call 0x764080
// 00661c95  8b10                 mov edx, dword ptr [eax]
// 00661c97  33c0                 xor eax, eax
// 00661c99  3b17                 cmp edx, dword ptr [edi]
// 00661c9b  0f94c0               sete al
// 00661c9e  50                   push eax
// 00661c9f  56                   push esi
// 00661ca0  e86b0e1000           call 0x762b10
// 00661ca5  83c420               add esp, 0x20
// 00661ca8  5f                   pop edi
// 00661ca9  b801000000           mov eax, 1
// 00661cae  5e                   pop esi
// 00661caf  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
