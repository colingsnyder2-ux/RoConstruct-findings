// from server: 100% by auto
// roc 2008-06 00570fe0  unit: RBX::Reflection::ClassDescriptor  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00570fe0
//
// 00570fe0  55                   push ebp
// 00570fe1  8bec                 mov ebp, esp
// 00570fe3  6aff                 push -1
// 00570fe5  68f1017d00           push 0x7d01f1
// 00570fea  64a100000000         mov eax, dword ptr fs:[0]
// 00570ff0  50                   push eax
// 00570ff1  64892500000000       mov dword ptr fs:[0], esp
// 00570ff8  83ec08               sub esp, 8
// 00570ffb  53                   push ebx
// 00570ffc  56                   push esi
// 00570ffd  57                   push edi
// 00570ffe  8965f0               mov dword ptr [ebp - 0x10], esp
// 00571001  6a1c                 push 0x1c
// 00571003  e818f91200           call 0x6a0920
// 00571008  8bf0                 mov esi, eax
// 0057100a  83c404               add esp, 4
// 0057100d  8975ec               mov dword ptr [ebp - 0x14], esi
// 00571010  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00571017  85f6                 test esi, esi
// 00571019  7405                 je 0x571020
// 0057101b  8b4508               mov eax, dword ptr [ebp + 8]
// 0057101e  8906                 mov dword ptr [esi], eax
// 00571020  8d4604               lea eax, [esi + 4]
// 00571023  85c0                 test eax, eax
// 00571025  7405                 je 0x57102c
// 00571027  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0057102a  8908                 mov dword ptr [eax], ecx
// 0057102c  8d4e08               lea ecx, [esi + 8]
// 0057102f  894d08               mov dword ptr [ebp + 8], ecx
// 00571032  894d0c               mov dword ptr [ebp + 0xc], ecx
// 00571035  c645fc01             mov byte ptr [ebp - 4], 1
// 00571039  85c9                 test ecx, ecx
// 0057103b  7409                 je 0x571046
// 0057103d  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00571040  52                   push edx
// 00571041  e86afcffff           call 0x570cb0
// 00571046  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00571049  5f                   pop edi
// 0057104a  8bc6                 mov eax, esi
// 0057104c  5e                   pop esi
// 0057104d  64890d00000000       mov dword ptr fs:[0], ecx
// 00571054  5b                   pop ebx
// 00571055  8be5                 mov esp, ebp
// 00571057  5d                   pop ebp
// 00571058  c20c00               ret 0xc
// library boost-1.34.1/libs\signals\src\named_slot_map.cpp (function ?_Buynode@?$list@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@std@@IAEPAU_Node@?$_List_nod@Uconnection_slot_pair@detail@signals@boost@@V?$allocator@Uconnection_slot_pair@detail@signals@boost@@@std@@@2@PAU342@0ABUconnection_slot_pair@detail@signals@boost@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/named_slot_map.cpp
