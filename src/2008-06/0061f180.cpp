// roc 2008-06 0061f180  unit: RBX::Lua::LuaArguments  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0061f180
//
// 0061f180  6aff                 push -1
// 0061f182  68a9947d00           push 0x7d94a9
// 0061f187  64a100000000         mov eax, dword ptr fs:[0]
// 0061f18d  50                   push eax
// 0061f18e  64892500000000       mov dword ptr fs:[0], esp
// 0061f195  83ec08               sub esp, 8
// 0061f198  56                   push esi
// 0061f199  57                   push edi
// 0061f19a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0061f19e  6a10                 push 0x10
// 0061f1a0  57                   push edi
// 0061f1a1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0061f1a9  e8923affff           call 0x612c40
// 0061f1ae  8bf0                 mov esi, eax
// 0061f1b0  83c408               add esp, 8
// 0061f1b3  89742408             mov dword ptr [esp + 8], esi
// 0061f1b7  8974240c             mov dword ptr [esp + 0xc], esi
// 0061f1bb  c644241801           mov byte ptr [esp + 0x18], 1
// 0061f1c0  85f6                 test esi, esi
// 0061f1c2  740c                 je 0x61f1d0
// 0061f1c4  8d442424             lea eax, [esp + 0x24]
// 0061f1c8  50                   push eax
// 0061f1c9  8bce                 mov ecx, esi
// 0061f1cb  e8205ff7ff           call 0x5950f0
// 0061f1d0  8b0de8b19500         mov ecx, dword ptr [0x95b1e8]
// 0061f1d6  51                   push ecx
// 0061f1d7  68f0d8ffff           push 0xffffd8f0
// 0061f1dc  57                   push edi
// 0061f1dd  c644242400           mov byte ptr [esp + 0x24], 0
// 0061f1e2  e8a932ffff           call 0x612490
// 0061f1e7  6afe                 push -2
// 0061f1e9  57                   push edi
// 0061f1ea  e80136ffff           call 0x6127f0
// 0061f1ef  83c414               add esp, 0x14
// 0061f1f2  8d4c2424             lea ecx, [esp + 0x24]
// 0061f1f6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0061f1fe  e86d61f7ff           call 0x595370
// 0061f203  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0061f207  5f                   pop edi
// 0061f208  8bc6                 mov eax, esi
// 0061f20a  5e                   pop esi
// 0061f20b  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f212  83c414               add esp, 0x14
// 0061f215  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??$pushNewObject@Vconnection@signals@boost@@@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@SAPAVconnection@signals@boost@@PAUlua_State@@V345@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
