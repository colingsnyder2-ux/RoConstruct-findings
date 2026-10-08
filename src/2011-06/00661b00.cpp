// roc 2011-06 00661b00  unit: RBX::VExplosion::?$EventDesc  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00661b00
//
// 00661b00  a1ecefc800           mov eax, dword ptr [0xc8efec]
// 00661b05  56                   push esi
// 00661b06  8b742408             mov esi, dword ptr [esp + 8]
// 00661b0a  57                   push edi
// 00661b0b  50                   push eax
// 00661b0c  6a02                 push 2
// 00661b0e  56                   push esi
// 00661b0f  e86c251000           call 0x764080
// 00661b14  8b0decefc800         mov ecx, dword ptr [0xc8efec]
// 00661b1a  51                   push ecx
// 00661b1b  6a01                 push 1
// 00661b1d  56                   push esi
// 00661b1e  8bf8                 mov edi, eax
// 00661b20  e85b251000           call 0x764080
// 00661b25  8b10                 mov edx, dword ptr [eax]
// 00661b27  33c0                 xor eax, eax
// 00661b29  3b17                 cmp edx, dword ptr [edi]
// 00661b2b  0f94c0               sete al
// 00661b2e  50                   push eax
// 00661b2f  56                   push esi
// 00661b30  e8db0f1000           call 0x762b10
// 00661b35  83c420               add esp, 0x20
// 00661b38  5f                   pop edi
// 00661b39  b801000000           mov eax, 1
// 00661b3e  5e                   pop esi
// 00661b3f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
