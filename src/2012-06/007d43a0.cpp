// roc 2012-06 007d43a0  unit: RBX::VTimerService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 007d43a0
//
// 007d43a0  55                   push ebp
// 007d43a1  8bec                 mov ebp, esp
// 007d43a3  6aff                 push -1
// 007d43a5  68f087ac00           push 0xac87f0
// 007d43aa  64a100000000         mov eax, dword ptr fs:[0]
// 007d43b0  50                   push eax
// 007d43b1  64892500000000       mov dword ptr fs:[0], esp
// 007d43b8  83ec08               sub esp, 8
// 007d43bb  53                   push ebx
// 007d43bc  56                   push esi
// 007d43bd  57                   push edi
// 007d43be  8965f0               mov dword ptr [ebp - 0x10], esp
// 007d43c1  6a30                 push 0x30
// 007d43c3  e852dd1a00           call 0x98211a
// 007d43c8  8bf0                 mov esi, eax
// 007d43ca  83c404               add esp, 4
// 007d43cd  8975ec               mov dword ptr [ebp - 0x14], esi
// 007d43d0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 007d43d7  85f6                 test esi, esi
// 007d43d9  7405                 je 0x7d43e0
// 007d43db  8b4508               mov eax, dword ptr [ebp + 8]
// 007d43de  8906                 mov dword ptr [esi], eax
// 007d43e0  8d4604               lea eax, [esi + 4]
// 007d43e3  85c0                 test eax, eax
// 007d43e5  7405                 je 0x7d43ec
// 007d43e7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 007d43ea  8908                 mov dword ptr [eax], ecx
// 007d43ec  8b5510               mov edx, dword ptr [ebp + 0x10]
// 007d43ef  52                   push edx
// 007d43f0  8d4608               lea eax, [esi + 8]
// 007d43f3  50                   push eax
// 007d43f4  e827ffffff           call 0x7d4320
// 007d43f9  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007d43fc  83c408               add esp, 8
// 007d43ff  5f                   pop edi
// 007d4400  8bc6                 mov eax, esi
// 007d4402  5e                   pop esi
// 007d4403  64890d00000000       mov dword ptr fs:[0], ecx
// 007d440a  5b                   pop ebx
// 007d440b  8be5                 mov esp, ebp
// 007d440d  5d                   pop ebp
// 007d440e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
