// roc 2008-06 005a97c0  unit: RBX::VScriptContext::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a97c0
//
// 005a97c0  a1e8b19500           mov eax, dword ptr [0x95b1e8]
// 005a97c5  56                   push esi
// 005a97c6  8b742408             mov esi, dword ptr [esp + 8]
// 005a97ca  57                   push edi
// 005a97cb  50                   push eax
// 005a97cc  6a02                 push 2
// 005a97ce  56                   push esi
// 005a97cf  e8dc7d0600           call 0x6115b0
// 005a97d4  8b0de8b19500         mov ecx, dword ptr [0x95b1e8]
// 005a97da  51                   push ecx
// 005a97db  6a01                 push 1
// 005a97dd  56                   push esi
// 005a97de  8bf8                 mov edi, eax
// 005a97e0  e8cb7d0600           call 0x6115b0
// 005a97e5  83c418               add esp, 0x18
// 005a97e8  57                   push edi
// 005a97e9  8bc8                 mov ecx, eax
// 005a97eb  e830b9feff           call 0x595120
// 005a97f0  0fb6d0               movzx edx, al
// 005a97f3  52                   push edx
// 005a97f4  56                   push esi
// 005a97f5  e8f68b0600           call 0x6123f0
// 005a97fa  83c408               add esp, 8
// 005a97fd  5f                   pop edi
// 005a97fe  b801000000           mov eax, 1
// 005a9803  5e                   pop esi
// 005a9804  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
