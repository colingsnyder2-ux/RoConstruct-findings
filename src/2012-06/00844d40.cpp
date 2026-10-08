// roc 2012-06 00844d40  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844d40
//
// 00844d40  a1549eda00           mov eax, dword ptr [0xda9e54]
// 00844d45  56                   push esi
// 00844d46  8b742408             mov esi, dword ptr [esp + 8]
// 00844d4a  57                   push edi
// 00844d4b  50                   push eax
// 00844d4c  6a02                 push 2
// 00844d4e  56                   push esi
// 00844d4f  e8bceafeff           call 0x833810
// 00844d54  8b0d549eda00         mov ecx, dword ptr [0xda9e54]
// 00844d5a  51                   push ecx
// 00844d5b  6a01                 push 1
// 00844d5d  56                   push esi
// 00844d5e  8bf8                 mov edi, eax
// 00844d60  e8abeafeff           call 0x833810
// 00844d65  8b10                 mov edx, dword ptr [eax]
// 00844d67  33c0                 xor eax, eax
// 00844d69  3b17                 cmp edx, dword ptr [edi]
// 00844d6b  0f94c0               sete al
// 00844d6e  50                   push eax
// 00844d6f  56                   push esi
// 00844d70  e82bd5feff           call 0x8322a0
// 00844d75  83c420               add esp, 0x20
// 00844d78  5f                   pop edi
// 00844d79  b801000000           mov eax, 1
// 00844d7e  5e                   pop esi
// 00844d7f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
