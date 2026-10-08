// roc 2010-06 00740bb0  unit: RBX::VHttp::?$sp_counted_impl_p  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00740bb0
//
// 00740bb0  55                   push ebp
// 00740bb1  8bec                 mov ebp, esp
// 00740bb3  6aff                 push -1
// 00740bb5  6830a69a00           push 0x9aa630
// 00740bba  64a100000000         mov eax, dword ptr fs:[0]
// 00740bc0  50                   push eax
// 00740bc1  64892500000000       mov dword ptr fs:[0], esp
// 00740bc8  83ec08               sub esp, 8
// 00740bcb  53                   push ebx
// 00740bcc  56                   push esi
// 00740bcd  57                   push edi
// 00740bce  8965f0               mov dword ptr [ebp - 0x10], esp
// 00740bd1  6a30                 push 0x30
// 00740bd3  e8c86d0600           call 0x7a79a0
// 00740bd8  8bf0                 mov esi, eax
// 00740bda  83c404               add esp, 4
// 00740bdd  8975ec               mov dword ptr [ebp - 0x14], esi
// 00740be0  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00740be7  85f6                 test esi, esi
// 00740be9  7405                 je 0x740bf0
// 00740beb  8b4508               mov eax, dword ptr [ebp + 8]
// 00740bee  8906                 mov dword ptr [esi], eax
// 00740bf0  8d4604               lea eax, [esi + 4]
// 00740bf3  85c0                 test eax, eax
// 00740bf5  7405                 je 0x740bfc
// 00740bf7  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00740bfa  8908                 mov dword ptr [eax], ecx
// 00740bfc  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00740bff  52                   push edx
// 00740c00  8d4608               lea eax, [esi + 8]
// 00740c03  50                   push eax
// 00740c04  e847faffff           call 0x740650
// 00740c09  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00740c0c  83c408               add esp, 8
// 00740c0f  5f                   pop edi
// 00740c10  8bc6                 mov eax, esi
// 00740c12  5e                   pop esi
// 00740c13  64890d00000000       mov dword ptr fs:[0], ecx
// 00740c1a  5b                   pop ebx
// 00740c1b  8be5                 mov esp, ebp
// 00740c1d  5d                   pop ebp
// 00740c1e  c20c00               ret 0xc
// library rbxgs/v8datamodel\TimerService.cpp (function ?_Buynode@?$list@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@std@@IAEPAU_Node@?$_List_nod@VItem@TimerService@RBX@@V?$allocator@VItem@TimerService@RBX@@@std@@@2@PAU342@0ABVItem@TimerService@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/TimerService.cpp
