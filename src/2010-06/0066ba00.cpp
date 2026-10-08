// roc 2010-06 0066ba00  unit: RBX::VTimerService::?$FactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0066ba00
//
// 0066ba00  55                   push ebp
// 0066ba01  8bec                 mov ebp, esp
// 0066ba03  6aff                 push -1
// 0066ba05  68e0f39900           push 0x99f3e0
// 0066ba0a  64a100000000         mov eax, dword ptr fs:[0]
// 0066ba10  50                   push eax
// 0066ba11  64892500000000       mov dword ptr fs:[0], esp
// 0066ba18  83ec08               sub esp, 8
// 0066ba1b  53                   push ebx
// 0066ba1c  56                   push esi
// 0066ba1d  57                   push edi
// 0066ba1e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0066ba21  6a30                 push 0x30
// 0066ba23  e878bf1300           call 0x7a79a0
// 0066ba28  8bf0                 mov esi, eax
// 0066ba2a  83c404               add esp, 4
// 0066ba2d  8975ec               mov dword ptr [ebp - 0x14], esi
// 0066ba30  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0066ba37  85f6                 test esi, esi
// 0066ba39  7405                 je 0x66ba40
// 0066ba3b  8b4508               mov eax, dword ptr [ebp + 8]
// 0066ba3e  8906                 mov dword ptr [esi], eax
// 0066ba40  8d4604               lea eax, [esi + 4]
// 0066ba43  85c0                 test eax, eax
// 0066ba45  7405                 je 0x66ba4c
// 0066ba47  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0066ba4a  8908                 mov dword ptr [eax], ecx
// 0066ba4c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 0066ba4f  52                   push edx
// 0066ba50  8d4608               lea eax, [esi + 8]
// 0066ba53  50                   push eax
// 0066ba54  e8b7feffff           call 0x66b910
// 0066ba59  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0066ba5c  83c408               add esp, 8
// 0066ba5f  5f                   pop edi
// 0066ba60  8bc6                 mov eax, esi
// 0066ba62  5e                   pop esi
// 0066ba63  64890d00000000       mov dword ptr fs:[0], ecx
// 0066ba6a  5b                   pop ebx
// 0066ba6b  8be5                 mov esp, ebp
// 0066ba6d  5d                   pop ebp
// 0066ba6e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
