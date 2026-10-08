// roc 2012-06 008440d0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008440d0
//
// 008440d0  a1d013de00           mov eax, dword ptr [0xde13d0]
// 008440d5  56                   push esi
// 008440d6  8b742408             mov esi, dword ptr [esp + 8]
// 008440da  57                   push edi
// 008440db  50                   push eax
// 008440dc  6a02                 push 2
// 008440de  56                   push esi
// 008440df  e82cf7feff           call 0x833810
// 008440e4  8b0dd013de00         mov ecx, dword ptr [0xde13d0]
// 008440ea  51                   push ecx
// 008440eb  6a01                 push 1
// 008440ed  56                   push esi
// 008440ee  8bf8                 mov edi, eax
// 008440f0  e81bf7feff           call 0x833810
// 008440f5  8b10                 mov edx, dword ptr [eax]
// 008440f7  33c0                 xor eax, eax
// 008440f9  3b17                 cmp edx, dword ptr [edi]
// 008440fb  0f94c0               sete al
// 008440fe  50                   push eax
// 008440ff  56                   push esi
// 00844100  e89be1feff           call 0x8322a0
// 00844105  83c420               add esp, 0x20
// 00844108  5f                   pop edi
// 00844109  b801000000           mov eax, 1
// 0084410e  5e                   pop esi
// 0084410f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
