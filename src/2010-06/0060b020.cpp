// roc 2010-06 0060b020  unit: RBX::ScriptContext  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b020
//
// 0060b020  a15c2abe00           mov eax, dword ptr [0xbe2a5c]
// 0060b025  56                   push esi
// 0060b026  8b742408             mov esi, dword ptr [esp + 8]
// 0060b02a  57                   push edi
// 0060b02b  50                   push eax
// 0060b02c  6a02                 push 2
// 0060b02e  56                   push esi
// 0060b02f  e8dc7d1100           call 0x722e10
// 0060b034  8b0d5c2abe00         mov ecx, dword ptr [0xbe2a5c]
// 0060b03a  51                   push ecx
// 0060b03b  6a01                 push 1
// 0060b03d  56                   push esi
// 0060b03e  8bf8                 mov edi, eax
// 0060b040  e8cb7d1100           call 0x722e10
// 0060b045  8b10                 mov edx, dword ptr [eax]
// 0060b047  33c0                 xor eax, eax
// 0060b049  3b17                 cmp edx, dword ptr [edi]
// 0060b04b  0f94c0               sete al
// 0060b04e  50                   push eax
// 0060b04f  56                   push esi
// 0060b050  e8ab661100           call 0x721700
// 0060b055  83c420               add esp, 0x20
// 0060b058  5f                   pop edi
// 0060b059  b801000000           mov eax, 1
// 0060b05e  5e                   pop esi
// 0060b05f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
