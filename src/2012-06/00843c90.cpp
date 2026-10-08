// roc 2012-06 00843c90  unit: RBX::Lua::VWaitScriptSlot::?$TGenericSlotWrapper  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00843c90
//
// 00843c90  a10814de00           mov eax, dword ptr [0xde1408]
// 00843c95  56                   push esi
// 00843c96  8b742408             mov esi, dword ptr [esp + 8]
// 00843c9a  57                   push edi
// 00843c9b  50                   push eax
// 00843c9c  6a02                 push 2
// 00843c9e  56                   push esi
// 00843c9f  e86cfbfeff           call 0x833810
// 00843ca4  8b0d0814de00         mov ecx, dword ptr [0xde1408]
// 00843caa  51                   push ecx
// 00843cab  6a01                 push 1
// 00843cad  56                   push esi
// 00843cae  8bf8                 mov edi, eax
// 00843cb0  e85bfbfeff           call 0x833810
// 00843cb5  83c418               add esp, 0x18
// 00843cb8  57                   push edi
// 00843cb9  8bc8                 mov ecx, eax
// 00843cbb  e890f21200           call 0x972f50
// 00843cc0  0fb6d0               movzx edx, al
// 00843cc3  52                   push edx
// 00843cc4  56                   push esi
// 00843cc5  e8d6e5feff           call 0x8322a0
// 00843cca  83c408               add esp, 8
// 00843ccd  5f                   pop edi
// 00843cce  b801000000           mov eax, 1
// 00843cd3  5e                   pop esi
// 00843cd4  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
