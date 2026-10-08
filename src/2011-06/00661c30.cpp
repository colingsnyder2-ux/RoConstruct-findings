// roc 2011-06 00661c30  unit: RBX::VExplosion::?$EventDesc  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661c30
//
// 00661c30  a15cd5c400           mov eax, dword ptr [0xc4d55c]
// 00661c35  56                   push esi
// 00661c36  8b742408             mov esi, dword ptr [esp + 8]
// 00661c3a  57                   push edi
// 00661c3b  50                   push eax
// 00661c3c  6a02                 push 2
// 00661c3e  56                   push esi
// 00661c3f  e83c241000           call 0x764080
// 00661c44  8b0d5cd5c400         mov ecx, dword ptr [0xc4d55c]
// 00661c4a  51                   push ecx
// 00661c4b  6a01                 push 1
// 00661c4d  56                   push esi
// 00661c4e  8bf8                 mov edi, eax
// 00661c50  e82b241000           call 0x764080
// 00661c55  8b10                 mov edx, dword ptr [eax]
// 00661c57  33c0                 xor eax, eax
// 00661c59  3b17                 cmp edx, dword ptr [edi]
// 00661c5b  0f94c0               sete al
// 00661c5e  50                   push eax
// 00661c5f  56                   push esi
// 00661c60  e8ab0e1000           call 0x762b10
// 00661c65  83c420               add esp, 0x20
// 00661c68  5f                   pop edi
// 00661c69  b801000000           mov eax, 1
// 00661c6e  5e                   pop esi
// 00661c6f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
