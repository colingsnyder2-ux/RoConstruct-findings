// roc 2009-06 006349f0  unit: RBX::VScriptContext::?$FactoryProduct  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006349f0
//
// 006349f0  a1f82aa200           mov eax, dword ptr [0xa22af8]
// 006349f5  56                   push esi
// 006349f6  8b742408             mov esi, dword ptr [esp + 8]
// 006349fa  57                   push edi
// 006349fb  50                   push eax
// 006349fc  6a02                 push 2
// 006349fe  56                   push esi
// 006349ff  e8ac610800           call 0x6babb0
// 00634a04  8b0df82aa200         mov ecx, dword ptr [0xa22af8]
// 00634a0a  51                   push ecx
// 00634a0b  6a01                 push 1
// 00634a0d  56                   push esi
// 00634a0e  8bf8                 mov edi, eax
// 00634a10  e89b610800           call 0x6babb0
// 00634a15  8b10                 mov edx, dword ptr [eax]
// 00634a17  33c0                 xor eax, eax
// 00634a19  3b17                 cmp edx, dword ptr [edi]
// 00634a1b  0f94c0               sete al
// 00634a1e  50                   push eax
// 00634a1f  56                   push esi
// 00634a20  e80b4b0800           call 0x6b9530
// 00634a25  83c420               add esp, 0x20
// 00634a28  5f                   pop edi
// 00634a29  b801000000           mov eax, 1
// 00634a2e  5e                   pop esi
// 00634a2f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
