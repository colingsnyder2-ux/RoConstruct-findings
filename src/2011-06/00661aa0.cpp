// roc 2011-06 00661aa0  unit: RBX::VExplosion::?$EventDesc  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661aa0
//
// 00661aa0  a1e8efc800           mov eax, dword ptr [0xc8efe8]
// 00661aa5  56                   push esi
// 00661aa6  8b742408             mov esi, dword ptr [esp + 8]
// 00661aaa  57                   push edi
// 00661aab  50                   push eax
// 00661aac  6a02                 push 2
// 00661aae  56                   push esi
// 00661aaf  e8cc251000           call 0x764080
// 00661ab4  8b0de8efc800         mov ecx, dword ptr [0xc8efe8]
// 00661aba  51                   push ecx
// 00661abb  6a01                 push 1
// 00661abd  56                   push esi
// 00661abe  8bf8                 mov edi, eax
// 00661ac0  e8bb251000           call 0x764080
// 00661ac5  8b10                 mov edx, dword ptr [eax]
// 00661ac7  33c0                 xor eax, eax
// 00661ac9  3b17                 cmp edx, dword ptr [edi]
// 00661acb  0f94c0               sete al
// 00661ace  50                   push eax
// 00661acf  56                   push esi
// 00661ad0  e83b101000           call 0x762b10
// 00661ad5  83c420               add esp, 0x20
// 00661ad8  5f                   pop edi
// 00661ad9  b801000000           mov eax, 1
// 00661ade  5e                   pop esi
// 00661adf  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
