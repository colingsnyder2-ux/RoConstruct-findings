// roc 2012-06 00845270  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00845270
//
// 00845270  a10414de00           mov eax, dword ptr [0xde1404]
// 00845275  56                   push esi
// 00845276  8b742408             mov esi, dword ptr [esp + 8]
// 0084527a  57                   push edi
// 0084527b  50                   push eax
// 0084527c  6a02                 push 2
// 0084527e  56                   push esi
// 0084527f  e88ce5feff           call 0x833810
// 00845284  8b0d0414de00         mov ecx, dword ptr [0xde1404]
// 0084528a  51                   push ecx
// 0084528b  6a01                 push 1
// 0084528d  56                   push esi
// 0084528e  8bf8                 mov edi, eax
// 00845290  e87be5feff           call 0x833810
// 00845295  83c418               add esp, 0x18
// 00845298  57                   push edi
// 00845299  8bc8                 mov ecx, eax
// 0084529b  e8d0fbffff           call 0x844e70
// 008452a0  0fb6d0               movzx edx, al
// 008452a3  52                   push edx
// 008452a4  56                   push esi
// 008452a5  e8f6cffeff           call 0x8322a0
// 008452aa  83c408               add esp, 8
// 008452ad  5f                   pop edi
// 008452ae  b801000000           mov eax, 1
// 008452b3  5e                   pop esi
// 008452b4  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
