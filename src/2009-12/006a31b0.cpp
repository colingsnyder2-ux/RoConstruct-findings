// roc 2009-12 006a31b0  unit: RBX::Lua::VWeakFunctionRef::?$holder  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006a31b0
//
// 006a31b0  a1fc32b500           mov eax, dword ptr [0xb532fc]
// 006a31b5  56                   push esi
// 006a31b6  8b742408             mov esi, dword ptr [esp + 8]
// 006a31ba  57                   push edi
// 006a31bb  50                   push eax
// 006a31bc  6a02                 push 2
// 006a31be  56                   push esi
// 006a31bf  e89c740e00           call 0x78a660
// 006a31c4  8b0dfc32b500         mov ecx, dword ptr [0xb532fc]
// 006a31ca  51                   push ecx
// 006a31cb  6a01                 push 1
// 006a31cd  56                   push esi
// 006a31ce  8bf8                 mov edi, eax
// 006a31d0  e88b740e00           call 0x78a660
// 006a31d5  8b10                 mov edx, dword ptr [eax]
// 006a31d7  33c0                 xor eax, eax
// 006a31d9  3b17                 cmp edx, dword ptr [edi]
// 006a31db  0f94c0               sete al
// 006a31de  50                   push eax
// 006a31df  56                   push esi
// 006a31e0  e86b5d0e00           call 0x788f50
// 006a31e5  83c420               add esp, 0x20
// 006a31e8  5f                   pop edi
// 006a31e9  b801000000           mov eax, 1
// 006a31ee  5e                   pop esi
// 006a31ef  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
