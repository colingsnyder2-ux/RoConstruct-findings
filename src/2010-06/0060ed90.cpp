// roc 2010-06 0060ed90  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ed90
//
// 0060ed90  a1b0d8bc00           mov eax, dword ptr [0xbcd8b0]
// 0060ed95  56                   push esi
// 0060ed96  8b742408             mov esi, dword ptr [esp + 8]
// 0060ed9a  57                   push edi
// 0060ed9b  50                   push eax
// 0060ed9c  6a02                 push 2
// 0060ed9e  56                   push esi
// 0060ed9f  e86c401100           call 0x722e10
// 0060eda4  8b0db0d8bc00         mov ecx, dword ptr [0xbcd8b0]
// 0060edaa  51                   push ecx
// 0060edab  6a01                 push 1
// 0060edad  56                   push esi
// 0060edae  8bf8                 mov edi, eax
// 0060edb0  e85b401100           call 0x722e10
// 0060edb5  8b10                 mov edx, dword ptr [eax]
// 0060edb7  33c0                 xor eax, eax
// 0060edb9  3b17                 cmp edx, dword ptr [edi]
// 0060edbb  0f94c0               sete al
// 0060edbe  50                   push eax
// 0060edbf  56                   push esi
// 0060edc0  e83b291100           call 0x721700
// 0060edc5  83c420               add esp, 0x20
// 0060edc8  5f                   pop edi
// 0060edc9  b801000000           mov eax, 1
// 0060edce  5e                   pop esi
// 0060edcf  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
