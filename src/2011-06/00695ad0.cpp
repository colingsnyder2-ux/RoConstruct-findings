// roc 2011-06 00695ad0  unit: RBX::VTimerService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00695ad0
//
// 00695ad0  55                   push ebp
// 00695ad1  8bec                 mov ebp, esp
// 00695ad3  6aff                 push -1
// 00695ad5  6830019f00           push 0x9f0130
// 00695ada  64a100000000         mov eax, dword ptr fs:[0]
// 00695ae0  50                   push eax
// 00695ae1  64892500000000       mov dword ptr fs:[0], esp
// 00695ae8  83ec08               sub esp, 8
// 00695aeb  53                   push ebx
// 00695aec  56                   push esi
// 00695aed  57                   push edi
// 00695aee  8965f0               mov dword ptr [ebp - 0x10], esp
// 00695af1  6a30                 push 0x30
// 00695af3  e866451700           call 0x80a05e
// 00695af8  8bf0                 mov esi, eax
// 00695afa  83c404               add esp, 4
// 00695afd  8975ec               mov dword ptr [ebp - 0x14], esi
// 00695b00  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00695b07  85f6                 test esi, esi
// 00695b09  7405                 je 0x695b10
// 00695b0b  8b4508               mov eax, dword ptr [ebp + 8]
// 00695b0e  8906                 mov dword ptr [esi], eax
// 00695b10  8d4604               lea eax, [esi + 4]
// 00695b13  85c0                 test eax, eax
// 00695b15  7405                 je 0x695b1c
// 00695b17  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00695b1a  8908                 mov dword ptr [eax], ecx
// 00695b1c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00695b1f  52                   push edx
// 00695b20  8d4608               lea eax, [esi + 8]
// 00695b23  50                   push eax
// 00695b24  e817ffffff           call 0x695a40
// 00695b29  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00695b2c  83c408               add esp, 8
// 00695b2f  5f                   pop edi
// 00695b30  8bc6                 mov eax, esi
// 00695b32  5e                   pop esi
// 00695b33  64890d00000000       mov dword ptr fs:[0], ecx
// 00695b3a  5b                   pop ebx
// 00695b3b  8be5                 mov esp, ebp
// 00695b3d  5d                   pop ebp
// 00695b3e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
