// roc 2007-08 005c3690  unit: RBX::Lua::LuaArguments  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c3690
//
// 005c3690  6aff                 push -1
// 005c3692  6809977500           push 0x759709
// 005c3697  64a100000000         mov eax, dword ptr fs:[0]
// 005c369d  50                   push eax
// 005c369e  64892500000000       mov dword ptr fs:[0], esp
// 005c36a5  83ec08               sub esp, 8
// 005c36a8  56                   push esi
// 005c36a9  57                   push edi
// 005c36aa  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005c36ae  6a10                 push 0x10
// 005c36b0  57                   push edi
// 005c36b1  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005c36b9  e8f2aeffff           call 0x5be5b0
// 005c36be  8bf0                 mov esi, eax
// 005c36c0  83c408               add esp, 8
// 005c36c3  89742408             mov dword ptr [esp + 8], esi
// 005c36c7  8974240c             mov dword ptr [esp + 0xc], esi
// 005c36cb  85f6                 test esi, esi
// 005c36cd  c644241801           mov byte ptr [esp + 0x18], 1
// 005c36d2  740c                 je 0x5c36e0
// 005c36d4  8d442424             lea eax, [esp + 0x24]
// 005c36d8  50                   push eax
// 005c36d9  8bce                 mov ecx, esi
// 005c36db  e8404b1600           call 0x728220
// 005c36e0  8b0d8cbe8a00         mov ecx, dword ptr [0x8abe8c]
// 005c36e6  51                   push ecx
// 005c36e7  68f0d8ffff           push 0xffffd8f0
// 005c36ec  57                   push edi
// 005c36ed  c644242400           mov byte ptr [esp + 0x24], 0
// 005c36f2  e809a7ffff           call 0x5bde00
// 005c36f7  6afe                 push -2
// 005c36f9  57                   push edi
// 005c36fa  e861aaffff           call 0x5be160
// 005c36ff  83c414               add esp, 0x14
// 005c3702  8d4c2424             lea ecx, [esp + 0x24]
// 005c3706  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005c370e  e84d4d1600           call 0x728460
// 005c3713  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c3717  5f                   pop edi
// 005c3718  8bc6                 mov eax, esi
// 005c371a  5e                   pop esi
// 005c371b  64890d00000000       mov dword ptr fs:[0], ecx
// 005c3722  83c414               add esp, 0x14
// 005c3725  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??$pushNewObject@Vconnection@signals@boost@@@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@SAPAVconnection@signals@boost@@PAUlua_State@@V345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
