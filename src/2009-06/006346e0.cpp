// roc 2009-06 006346e0  unit: RBX::VScriptContext::?$FactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006346e0
//
// 006346e0  a11c2ba200           mov eax, dword ptr [0xa22b1c]
// 006346e5  56                   push esi
// 006346e6  8b742408             mov esi, dword ptr [esp + 8]
// 006346ea  57                   push edi
// 006346eb  50                   push eax
// 006346ec  6a02                 push 2
// 006346ee  56                   push esi
// 006346ef  e8bc640800           call 0x6babb0
// 006346f4  8b0d1c2ba200         mov ecx, dword ptr [0xa22b1c]
// 006346fa  51                   push ecx
// 006346fb  6a01                 push 1
// 006346fd  56                   push esi
// 006346fe  8bf8                 mov edi, eax
// 00634700  e8ab640800           call 0x6babb0
// 00634705  83c418               add esp, 0x18
// 00634708  57                   push edi
// 00634709  8bc8                 mov ecx, eax
// 0063470b  e87055fcff           call 0x5f9c80
// 00634710  0fb6d0               movzx edx, al
// 00634713  52                   push edx
// 00634714  56                   push esi
// 00634715  e8164e0800           call 0x6b9530
// 0063471a  83c408               add esp, 8
// 0063471d  5f                   pop edi
// 0063471e  b801000000           mov eax, 1
// 00634723  5e                   pop esi
// 00634724  c3                   ret 
// library rbxgs/script\ScriptContext.cpp (function ?on_eq@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@KAHPAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
