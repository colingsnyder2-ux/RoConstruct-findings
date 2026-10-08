// roc 2009-06 00635bc0  unit: RBX::Lua::VFunctionRef::?$holder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00635bc0
//
// 00635bc0  a14ce2a100           mov eax, dword ptr [0xa1e24c]
// 00635bc5  56                   push esi
// 00635bc6  8b742408             mov esi, dword ptr [esp + 8]
// 00635bca  57                   push edi
// 00635bcb  50                   push eax
// 00635bcc  6a02                 push 2
// 00635bce  56                   push esi
// 00635bcf  e8dc4f0800           call 0x6babb0
// 00635bd4  8b0d4ce2a100         mov ecx, dword ptr [0xa1e24c]
// 00635bda  51                   push ecx
// 00635bdb  6a01                 push 1
// 00635bdd  56                   push esi
// 00635bde  8bf8                 mov edi, eax
// 00635be0  e8cb4f0800           call 0x6babb0
// 00635be5  8b10                 mov edx, dword ptr [eax]
// 00635be7  33c0                 xor eax, eax
// 00635be9  3b17                 cmp edx, dword ptr [edi]
// 00635beb  0f94c0               sete al
// 00635bee  50                   push eax
// 00635bef  56                   push esi
// 00635bf0  e83b390800           call 0x6b9530
// 00635bf5  83c420               add esp, 0x20
// 00635bf8  5f                   pop edi
// 00635bf9  b801000000           mov eax, 1
// 00635bfe  5e                   pop esi
// 00635bff  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
