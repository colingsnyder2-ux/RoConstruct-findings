// roc 2012-06 00844d80  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00844d80
//
// 00844d80  a1589eda00           mov eax, dword ptr [0xda9e58]
// 00844d85  56                   push esi
// 00844d86  8b742408             mov esi, dword ptr [esp + 8]
// 00844d8a  57                   push edi
// 00844d8b  50                   push eax
// 00844d8c  6a02                 push 2
// 00844d8e  56                   push esi
// 00844d8f  e87ceafeff           call 0x833810
// 00844d94  8b0d589eda00         mov ecx, dword ptr [0xda9e58]
// 00844d9a  51                   push ecx
// 00844d9b  6a01                 push 1
// 00844d9d  56                   push esi
// 00844d9e  8bf8                 mov edi, eax
// 00844da0  e86beafeff           call 0x833810
// 00844da5  8b10                 mov edx, dword ptr [eax]
// 00844da7  33c0                 xor eax, eax
// 00844da9  3b17                 cmp edx, dword ptr [edi]
// 00844dab  0f94c0               sete al
// 00844dae  50                   push eax
// 00844daf  56                   push esi
// 00844db0  e8ebd4feff           call 0x8322a0
// 00844db5  83c420               add esp, 0x20
// 00844db8  5f                   pop edi
// 00844db9  b801000000           mov eax, 1
// 00844dbe  5e                   pop esi
// 00844dbf  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
