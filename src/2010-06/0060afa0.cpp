// roc 2010-06 0060afa0  unit: RBX::ScriptContext  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060afa0
//
// 0060afa0  a1702abe00           mov eax, dword ptr [0xbe2a70]
// 0060afa5  56                   push esi
// 0060afa6  8b742408             mov esi, dword ptr [esp + 8]
// 0060afaa  57                   push edi
// 0060afab  50                   push eax
// 0060afac  6a02                 push 2
// 0060afae  56                   push esi
// 0060afaf  e85c7e1100           call 0x722e10
// 0060afb4  8b0d702abe00         mov ecx, dword ptr [0xbe2a70]
// 0060afba  51                   push ecx
// 0060afbb  6a01                 push 1
// 0060afbd  56                   push esi
// 0060afbe  8bf8                 mov edi, eax
// 0060afc0  e84b7e1100           call 0x722e10
// 0060afc5  8b10                 mov edx, dword ptr [eax]
// 0060afc7  33c0                 xor eax, eax
// 0060afc9  3b17                 cmp edx, dword ptr [edi]
// 0060afcb  0f94c0               sete al
// 0060afce  50                   push eax
// 0060afcf  56                   push esi
// 0060afd0  e82b671100           call 0x721700
// 0060afd5  83c420               add esp, 0x20
// 0060afd8  5f                   pop edi
// 0060afd9  b801000000           mov eax, 1
// 0060afde  5e                   pop esi
// 0060afdf  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
