// roc 2009-06 00636300  unit: RBX::Lua::VFunctionRef::?$holder  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00636300
//
// 00636300  a1182ba200           mov eax, dword ptr [0xa22b18]
// 00636305  56                   push esi
// 00636306  8b742408             mov esi, dword ptr [esp + 8]
// 0063630a  57                   push edi
// 0063630b  50                   push eax
// 0063630c  6a02                 push 2
// 0063630e  56                   push esi
// 0063630f  e89c480800           call 0x6babb0
// 00636314  8b0d182ba200         mov ecx, dword ptr [0xa22b18]
// 0063631a  51                   push ecx
// 0063631b  6a01                 push 1
// 0063631d  56                   push esi
// 0063631e  8bf8                 mov edi, eax
// 00636320  e88b480800           call 0x6babb0
// 00636325  83c418               add esp, 0x18
// 00636328  57                   push edi
// 00636329  8bc8                 mov ecx, eax
// 0063632b  e8f0fbffff           call 0x635f20
// 00636330  0fb6d0               movzx edx, al
// 00636333  52                   push edx
// 00636334  56                   push esi
// 00636335  e8f6310800           call 0x6b9530
// 0063633a  83c408               add esp, 8
// 0063633d  5f                   pop edi
// 0063633e  b801000000           mov eax, 1
// 00636343  5e                   pop esi
// 00636344  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
