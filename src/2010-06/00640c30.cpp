// roc 2010-06 00640c30  unit: RBX::VInstance::?$NonFactoryProduct  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00640c30
//
// 00640c30  55                   push ebp
// 00640c31  8bec                 mov ebp, esp
// 00640c33  6aff                 push -1
// 00640c35  6860cb9900           push 0x99cb60
// 00640c3a  64a100000000         mov eax, dword ptr fs:[0]
// 00640c40  50                   push eax
// 00640c41  64892500000000       mov dword ptr fs:[0], esp
// 00640c48  83ec08               sub esp, 8
// 00640c4b  53                   push ebx
// 00640c4c  56                   push esi
// 00640c4d  57                   push edi
// 00640c4e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00640c51  6a30                 push 0x30
// 00640c53  e8486d1600           call 0x7a79a0
// 00640c58  8bf0                 mov esi, eax
// 00640c5a  83c404               add esp, 4
// 00640c5d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00640c60  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00640c67  85f6                 test esi, esi
// 00640c69  7405                 je 0x640c70
// 00640c6b  8b4508               mov eax, dword ptr [ebp + 8]
// 00640c6e  8906                 mov dword ptr [esi], eax
// 00640c70  8d4604               lea eax, [esi + 4]
// 00640c73  85c0                 test eax, eax
// 00640c75  7405                 je 0x640c7c
// 00640c77  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00640c7a  8908                 mov dword ptr [eax], ecx
// 00640c7c  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00640c7f  52                   push edx
// 00640c80  8d4608               lea eax, [esi + 8]
// 00640c83  50                   push eax
// 00640c84  e8c7f5ffff           call 0x640250
// 00640c89  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00640c8c  83c408               add esp, 8
// 00640c8f  5f                   pop edi
// 00640c90  8bc6                 mov eax, esi
// 00640c92  5e                   pop esi
// 00640c93  64890d00000000       mov dword ptr fs:[0], ecx
// 00640c9a  5b                   pop ebx
// 00640c9b  8be5                 mov esp, ebp
// 00640c9d  5d                   pop ebp
// 00640c9e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
