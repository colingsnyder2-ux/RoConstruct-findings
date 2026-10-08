// roc 2007-03 005be750  unit: seg_005b0000  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005be750
//
// 005be750  6aff                 push -1
// 005be752  6879a37500           push 0x75a379
// 005be757  64a100000000         mov eax, dword ptr fs:[0]
// 005be75d  50                   push eax
// 005be75e  64892500000000       mov dword ptr fs:[0], esp
// 005be765  83ec08               sub esp, 8
// 005be768  56                   push esi
// 005be769  57                   push edi
// 005be76a  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005be76e  6a10                 push 0x10
// 005be770  57                   push edi
// 005be771  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005be779  e802b3ffff           call 0x5b9a80
// 005be77e  8bf0                 mov esi, eax
// 005be780  83c408               add esp, 8
// 005be783  89742408             mov dword ptr [esp + 8], esi
// 005be787  8974240c             mov dword ptr [esp + 0xc], esi
// 005be78b  85f6                 test esi, esi
// 005be78d  c644241801           mov byte ptr [esp + 0x18], 1
// 005be792  740c                 je 0x5be7a0
// 005be794  8d442424             lea eax, [esp + 0x24]
// 005be798  50                   push eax
// 005be799  8bce                 mov ecx, esi
// 005be79b  e8d0a01600           call 0x728870
// 005be7a0  8b0d5c828a00         mov ecx, dword ptr [0x8a825c]
// 005be7a6  51                   push ecx
// 005be7a7  68f0d8ffff           push 0xffffd8f0
// 005be7ac  57                   push edi
// 005be7ad  c644242400           mov byte ptr [esp + 0x24], 0
// 005be7b2  e819abffff           call 0x5b92d0
// 005be7b7  6afe                 push -2
// 005be7b9  57                   push edi
// 005be7ba  e871aeffff           call 0x5b9630
// 005be7bf  83c414               add esp, 0x14
// 005be7c2  8d4c2424             lea ecx, [esp + 0x24]
// 005be7c6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005be7ce  e88da21600           call 0x728a60
// 005be7d3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005be7d7  5f                   pop edi
// 005be7d8  8bc6                 mov eax, esi
// 005be7da  5e                   pop esi
// 005be7db  64890d00000000       mov dword ptr fs:[0], ecx
// 005be7e2  83c414               add esp, 0x14
// 005be7e5  c3                   ret 
// library rbxgs/script\LuaSignalBridge.cpp (function ??$pushNewObject@Vconnection@signals@boost@@@?$Bridge@Vconnection@signals@boost@@$00@Lua@RBX@@SAPAVconnection@signals@boost@@PAUlua_State@@V345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaSignalBridge.cpp
