// roc 2012-06 008441d0  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008441d0
//
// 008441d0  a1e413de00           mov eax, dword ptr [0xde13e4]
// 008441d5  56                   push esi
// 008441d6  8b742408             mov esi, dword ptr [esp + 8]
// 008441da  57                   push edi
// 008441db  50                   push eax
// 008441dc  6a02                 push 2
// 008441de  56                   push esi
// 008441df  e82cf6feff           call 0x833810
// 008441e4  8b0de413de00         mov ecx, dword ptr [0xde13e4]
// 008441ea  51                   push ecx
// 008441eb  6a01                 push 1
// 008441ed  56                   push esi
// 008441ee  8bf8                 mov edi, eax
// 008441f0  e81bf6feff           call 0x833810
// 008441f5  8b10                 mov edx, dword ptr [eax]
// 008441f7  33c0                 xor eax, eax
// 008441f9  3b17                 cmp edx, dword ptr [edi]
// 008441fb  0f94c0               sete al
// 008441fe  50                   push eax
// 008441ff  56                   push esi
// 00844200  e89be0feff           call 0x8322a0
// 00844205  83c420               add esp, 0x20
// 00844208  5f                   pop edi
// 00844209  b801000000           mov eax, 1
// 0084420e  5e                   pop esi
// 0084420f  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@VBrickColor@RBX@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
