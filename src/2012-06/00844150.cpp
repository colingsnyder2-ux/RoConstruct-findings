// roc 2012-06 00844150  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844150
//
// 00844150  a1e013de00           mov eax, dword ptr [0xde13e0]
// 00844155  56                   push esi
// 00844156  8b742408             mov esi, dword ptr [esp + 8]
// 0084415a  57                   push edi
// 0084415b  50                   push eax
// 0084415c  6a02                 push 2
// 0084415e  56                   push esi
// 0084415f  e8acf6feff           call 0x833810
// 00844164  8b0de013de00         mov ecx, dword ptr [0xde13e0]
// 0084416a  51                   push ecx
// 0084416b  6a01                 push 1
// 0084416d  56                   push esi
// 0084416e  8bf8                 mov edi, eax
// 00844170  e89bf6feff           call 0x833810
// 00844175  8b10                 mov edx, dword ptr [eax]
// 00844177  33c0                 xor eax, eax
// 00844179  3b17                 cmp edx, dword ptr [edi]
// 0084417b  0f94c0               sete al
// 0084417e  50                   push eax
// 0084417f  56                   push esi
// 00844180  e81be1feff           call 0x8322a0
// 00844185  83c420               add esp, 0x20
// 00844188  5f                   pop edi
// 00844189  b801000000           mov eax, 1
// 0084418e  5e                   pop esi
// 0084418f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
